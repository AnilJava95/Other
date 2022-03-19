<#
function Add-Numbers {
   return($args[0] + $args[1])
}
Add-Numbers $args[0] $args[1]
#>

<#
function Add-Numbers ($intX, $intY){
   $result = $intX + $intY
   $result
}
Add-Numbers $args[0] $args[1]
#>

<#
function Add-Numbers{
   Param([int]$intX = -1, [int]$intY = -1)
   $result = $intX + $intY
   
   if ($result -ge 0)
      $BrET = $TRUE
   else
      $bRet = $false
   return $bRet
}
Add-Numbers $args[0] $args[1]
#>

function Combine-TwoStrings ($X, $Y){
   $result = $intX + $intY
   $result.To.Upper()
}
Combine-TwoStrings $args[0] $args[1]