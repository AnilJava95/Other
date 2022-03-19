using System;
using System.Linq;
using System.Data.SQLite;
using System.Threading.Tasks;

namespace BlazorApp.Data
{
    public class LoginService : SqliteService
    {
        public int loginstat { get; set;}
        public static MemberData userdata { get; set;}
        public LoginService() {
            loginstat = 0;
            userdata = new MemberData();
        }

        public void setlogin(int login) { 
            this.loginstat = login;
        }
        public int getlogin() { 
            return this.loginstat;
        }

        public Task<int> GetLoginAsync() //return logic status
        {
            return Task.FromResult(getlogin());
        }
        /*
        public Task<MemberData> GetMemberInfo()
        {
            return Task.FromResult(new MemberData
            {
                Name = "Kim", 
            }); 
        }
        */
        public Task<bool> LoginVerify(string username, string passwd) { 
            string stm = "SELECT * FROM member"; 
            using var cmd = new SQLiteCommand(stm, con); 
            using SQLiteDataReader rdr = cmd.ExecuteReader(); 
            string name= ""; 
            string password = ""; 

            while (rdr. Read()) 
            {
                name = rdr.GetString(1); 
                password = rdr.GetString(2); 

                if (name == username && password == passwd) { 
                    setlogin(1); 
                    userdata.Name=username; 
                    userdata.Password=passwd; 
                    return Task.FromResult(true); 
                }
            }

            return Task.FromResult(false);

    }
}