# Code Task Area

![The Task Class Diagram](../assets/classDiagramTask01.png)

- [ ] **Read** carefully the **Class Diagram** that was given to you by the Designer/Requirements Department.
- [ ] **Write** the **source code** that implements the diagram.
- [ ] **Fork** the repo, **add** here the file with your source code, and send a **pull request**!
- [ ] The source code should include your IDs in the comments.

# Fire Detection System README

## Introduction:
This is a simple fire detection system implemented in C++. It consists of three main classes: Satellite, FireScanner, and Drone. The system detects fire based on the heat level recorded by the satellite and triggers an alert if the heat level exceeds a certain threshold.

## Classes:

1. **Satellite:** 
   - Represents a satellite in space.
   - Attributes:
     - Longitude: Longitude coordinate of the satellite.
     - Latitude: Latitude coordinate of the satellite.
     - Altitude: Altitude of the satellite.
     - HeatLevel: Recorded heat level, indicating the presence of fire.
   - Methods:
     - Constructor: Initializes the satellite with given longitude, latitude, and altitude.
     - Getters and setters for latitude, longitude, altitude, and heat level.

2. **FireScanner:** 
   - Represents a device capable of scanning locations for fire.
   - Attributes: None.
   - Methods:
     - ScanLocationForFire: Checks if the heat level recorded by a satellite exceeds a certain threshold, indicating fire.

3. **Drone:** 
   - Represents a drone equipped with a fire scanner.
   - Attributes:
     - FireScanner: An instance of the FireScanner class.
     - Longitude: Longitude coordinate of the drone.
     - Latitude: Latitude coordinate of the drone.
     - Altitude: Altitude of the drone.
   - Methods:
     - Constructor: Initializes the drone with given longitude, latitude, and altitude.
     - ScanLocationForFire: Utilizes the FireScanner to detect fire based on satellite data.

## Usage:
1. Create a Satellite object with specific coordinates and altitude.
2. Set the heat level of the satellite.
3. Create a Drone object with specific coordinates and altitude.
4. Scan the location for fire using the drone.

## Example:
```cpp
// Create a Satellite object
Satellite satellite(12345, 67890, 10000);

// Create a Drone object
Drone drone(54321, 98765, 5000);

// Set the heat level of the satellite
satellite.setHeatLevel(150);

// Scan the location for fire using the drone
drone.ScanLocationForFire(satellite);
