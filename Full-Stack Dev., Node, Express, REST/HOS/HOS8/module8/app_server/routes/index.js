const express = require('express');
const router = express.Router();

module.exports = router;

//const ctrlMain = require('../controllers/main');
const ctrlLocations = require('../controllers/locations'); 
const ctrlOthers = require('../controllers/others'); 

/* Locations pages */ 
router.get('/', ctrlLocations.homelist); 
router.get('/location', ctrlLocations.locationInfo); 
router.get('/location/review/new', ctrlLocations.addReview); 

/* Other pages */ 
router.get('/about', ctrlOthers.about); 
