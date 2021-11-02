# Plant Minotor

# Peace Lily: Fresh, Green & Air-purifying
    
> As fresh as summer breeze!
    
    [icon . logo]
    
    enjoys moist soil and low-light conditions.
 

## Background

- **Why Monitoring?**

    * To keep a plant happy and healthy.
    
    * To remedy a plant at the early stage when the signs that it is unhappy come up.
    
    * To data insight [TBC]

- **Peace Lily**

    * **Spathiphyllum**
    
        Spathiphyllum
    
    * **Introduction**
        
        One of the most common mistakes in the care of peace lilies is overwatering. Peace lilies are far more tolerant of underwatering than overwatering, which is one of the most common reasons for a peace lily to die. It is because of this, you should never water peace lily plants on a schedule. Rather, you should check them once a week to see if they need to be watered. Simply touch the top of the soil to see if it is dry. If it is, water your peace lily. If the soil is still damp, the plant does not need to be watered. Some people will go so far as to wait until their peace lily is starting to droop before watering their plant. As these plants are very drought tolerant, this method does not harm the plant and will prevent overwatering.

    * **Humidity**
    
        * She loves humidity. If your bathroom gets lots of light, pop her in there. Or mist her every few days to keep her happy.
        * Peace lilies prefer high humidity levels. Try to maintain at least 50% humidity level to have a thriving and growing peace lily in the house.
        * Humidity should be above 50%, 60%, and above is ideal.
        * A humidity level above 60% is best but they will tolerate anything about 50% humidity without a problem.

    * **Most light conditions**
    
        * She’s easy when it comes to light, managing in most conditions, though she’ll flower more in a brighter spot.
        * They thrive in low light and are not to be put in direct sunlight.
        * Too much sun causes the plant to be stressed and results in the leaves turning yellow and brown.

    * **Temperature**
        
        * Place the plant in an area with a temperature of around 15 °C, for six to eight weeks in a light position and it will soon flourish again.
        * The plant prefers a light position, out of the bright sunshine with a temperature of 18-22 °C.
        * The ideal temperature range is 65 to 80 °F (18 and 26 °C).

    * **Light watering**
        
        She’s pretty tough and will usually bounce back from a missed watering. Water her when the top inch of soil feels dry.
        
    * **Bloom**

        When met with the proper requirements, this species of Spathiphyllum blooms in Spring and might flower again in Autumn under ideal conditions.
        
    * **When to water**

        Expect to thoroughly water your Peace Lily once a week, more during the summer growing season.
        
    * **SIGNS THAT YOUR PEACE LILY PLANT IS UNHAPPY**

        * YELLOWING LEAVES
        * REDUCTION IN BLOOMS
        * TIPS OF THE LEAVES TURN BROWN
        

<img src="https://user-images.githubusercontent.com/52306317/139738207-40bf5fb8-8830-4b9f-90d1-053e4072d1ae.png" alt="Cover" width="70%"/>

**Reference:**

[1] Patch Plant- https://www.patchplants.com/gb/en/plants/peace-lily-164/

[2] Gardening Know How- https://www.gardeningknowhow.com/houseplants/peace-lily/peace-lily-plants.htm

[3] PLANTOPHILES- https://plantophiles.com/plant-care/peace-lily/


## Board & Sensor

- **Feather Huzzah ESP8266 Wifi**

    * 3.3V regulator with 500mA peak current output
    * 1 x analog inputs 1.0V max
    * Pin #0 red LED for general purpose blinking.
    * Pin #2 blue LED for bootloading debug & general purpose blinking
    

    <img src="https://user-images.githubusercontent.com/52306317/139914373-98f6b8ad-0173-46ee-bf11-49e4ad341fd2.png" alt="Cover" width="50%"/>

    https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/pinouts


- **Sensor Information**

    * **DHT22**


        | DHT22             | Description       |
        | ---------------   | ---------------   |
        | Humidity Reading           | 0 - 100% humidity             |
        | Humidity Accuracy         | 2 - 5%              |
        | Temperature Reading         | -40 to 80°C               |
        | Temperature Accuracy         | ±0.5°C              |
        | Sampling Rate         | 0.5Hz (every 2 seconds)            |

    
        * Test and Calibrate
          
          https://www.kandrsmith.org/RJS/Misc/Hygrometers/calib_dht22.html
    
    <img src="https://user-images.githubusercontent.com/52306317/139915022-c800fd49-852e-4850-b4a7-ac037570f862.png" alt="Cover" width="50%"/>
    


    * **Nail Soil Sensor**
    
        * The more water in the soil, the less resistance we'll get (and vice versa).
        
          https://www.instructables.com/Moisture-Detection-With-Two-Nails/
        
          https://www.instructables.com/DIY-SOIL-MOISTURE-SENSOR-CHEAP-YET-ACCURATE-/

**Reference:**

[1] https://learn.adafruit.com/dht

[2] https://www.instructables.com/Moisture-Detection-With-Two-Nails/





## Goals

Detailed to Peace Lily's characteristics

1. ddd
2. xxx
3. aaa


## Process

<img src="https://user-images.githubusercontent.com/52306317/139906286-e6e36bfe-289f-4f25-a535-e207ac6e4b2c.png" alt="Cover" width="80%"/>


### 1. Set Up Feather Huzzah ESP8266 Wifi

[highlight key scripts!]

### 2. Build a Soil Moisture Sensor

* we added an NPN transistor so that we could turn off the voltage going to the nails to reduce electrolysis (ie we literally have a switch that turns off that part of the circuit when we are not taking a reading)

* [Circuit diagram]


<img src="https://user-images.githubusercontent.com/52306317/139733132-b2756297-6bf7-4328-a4ed-289d1a90525c.png" alt="Cover" width="70%"/>



### 3. Publish Data to MQTT
* **Time**: 27 Oct at 13:14
* **Location**: CE Lab
* **Data**: 
    * Temperature: 24.3
    * Humidity: 56
    * Moisture: 63 (Test: While touch two nails together, the value goes up to 800.)


* **Diagnosis**

```Temperature:``` Uh-oh! A bit higher than its ideal range (18-22 °C)

```Humidity:``` Great! ( > 50% is good; > 60% is ideal )

```Moisture:``` (To be experience, the soil seems too dry for Peace Lily)



* **Data Explanation!!!**

Test: 
Plant Moisture: 63


<img src="https://user-images.githubusercontent.com/52306317/139737681-edaf7c36-f0b5-4d22-8b80-97ce727a76e6.png" alt="Cover" width="100%"/>



https://user-images.githubusercontent.com/52306317/139734037-1826e990-f15e-4771-b7ad-bd7aefabf9c4.mp4


<!-- <video src="https://user-images.githubusercontent.com/52306317/139717019-878370eb-f470-4fd0-84df-83938561631a.mp4" type="video/mp4" width="40%"/> -->


### 4. Store data on a RPi gateway

[To be Finished]

https://www.influxdata.com/


### 5. Visualise time series data

[To be Finished]

https://grafana.com/




## Reflection

* **Experiment & Calibaration for Critical Numbers**

    * Steel Nail

        * Distance between two nails
        * length of nails
        * depth in soil
        * type of soil

    * Environment Reporting Webpage

        * https://github.com/ucl-casa-ce/casa0014/blob/main/plantMonitor/testEnvWeb/testEnvWeb.ino
        * https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/

* **Add-on other Sensors**

    * How to monitor the color or the morphology of leaf

* **User Interaction via Website**

    * 3D digital twin for Peace Lily
    * [schematic diagram]
