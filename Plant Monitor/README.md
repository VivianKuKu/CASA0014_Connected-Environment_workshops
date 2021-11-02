# :potted_plant: Plant Minotor- Peace Lily

<!-- > Fresh, Green & Air-purifying    -->

> Peace Lily, officially called Spathiphyllum, is well known for its air-purifying abilities as a houseplant.

<img src="https://user-images.githubusercontent.com/52306317/139738207-40bf5fb8-8830-4b9f-90d1-053e4072d1ae.png" alt="Cover" width="70%"/>
    

## Top Tips for Caring for Peace Lily

* **Humidity**

    * A humidity level above ```60%``` is best but they will tolerate anything about ```50%``` humidity without a problem.

* **Light**

    * They thrive in ```low light``` and are not to be put in direct sunlight.

* **Temperature**

    * They prefer a light position, out of the bright sunshine with a temperature of ```18-22 °C```.

* **Bloom**

    When met with the proper requirements, this species of Spathiphyllum blooms in ```Spring``` and might flower again in ```Autumn``` under ideal conditions.

* **When to water**

    * Expect to thoroughly water them once a week, more during the ```summer growing season```.
    * They are pretty tough and will usually bounce back from a missed watering. Water them when the top inch of soil feels dry.
    

* **Signs that Peace Lily is unhappy**

    * ```Yellow Leaves```
    
        * Remedy: Let the plant breathe when it comes to watering. Allow it to dry out completely and then adjust your watering schedule as needed.
    
    * ```Reduction in Blooms```
        * Remedy: Move it to an area with indirect light.
    
    * ```Tips of the Leaves turn Brown```
        * Remedy: Move it to an area with indirect light and increase the humidity.



**Reference:**

[1] Patch Plant- https://www.patchplants.com/gb/en/plants/peace-lily-164/

[2] Gardening Know How- https://www.gardeningknowhow.com/houseplants/peace-lily/peace-lily-plants.htm

[3] PLANTOPHILES- https://plantophiles.com/plant-care/peace-lily/



## Goal

#### 1. To keep a plant happy and healthy by understanding its ideal living requirement. (vs. requirement provided by textbooks)

#### 2. Hope to detect the unhappy signs of a plant and remedy it at the early stage.

#### 3. Hope to build webpage embedded a 3D model of Peace Lily and to demonstrate the live data and notification.


## Board & Sensor

- **Feather Huzzah ESP8266 Wifi**

    * 3.3V regulator with 500mA peak current output
    * 1 x analog inputs 1.0V max
    * Pin #0 red LED for general purpose blinking.
    * Pin #2 blue LED for bootloading debug & general purpose blinking
    

    <img src="https://user-images.githubusercontent.com/52306317/139914373-98f6b8ad-0173-46ee-bf11-49e4ad341fd2.png" alt="Cover" width="50%"/>

    https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/pinouts

- **Raspberry Pi 4 Computer**

    * Model B 4GB

    <img src="https://user-images.githubusercontent.com/52306317/139950326-b667463c-cb4c-46c2-a870-b4bf8731cb3d.png" alt="Cover" width="50%"/>
    
    https://www.raspberrypi.com/products/raspberry-pi-4-model-b/
    

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



## Process

<img src="https://user-images.githubusercontent.com/52306317/139906286-e6e36bfe-289f-4f25-a535-e207ac6e4b2c.png" alt="Cover" width="80%"/>


### 1. Set Up Feather Huzzah ESP8266 Wifi

[highlight key scripts!]

### 2. Build a Soil Moisture Sensor

* we added an NPN transistor so that we could turn off the voltage going to the nails to reduce electrolysis (ie we literally have a switch that turns off that part of the circuit when we are not taking a reading)



<img src="https://user-images.githubusercontent.com/52306317/139956795-0757b810-96f2-4f17-a909-4996398b6792.png" alt="Cover" width="70%"/>

(source: CE Workshop, CASA, UCL)


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

```Moisture:``` (To be experiment, the soil seems too dry for Peace Lily from my hand touch)

* **Reference**

    How to make your soil retain more water?- https://plantcareforbeginners.com/articles/how-to-make-your-soil-retain-more-water

<img src="https://user-images.githubusercontent.com/52306317/139737681-edaf7c36-f0b5-4d22-8b80-97ce727a76e6.png" alt="Cover" width="100%"/>


https://user-images.githubusercontent.com/52306317/139734037-1826e990-f15e-4771-b7ad-bd7aefabf9c4.mp4



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

    * How to monitor the color or the morphology of leaves (maybe use color detector)

* **User Interaction via Website**

    * 3D digital twin for Peace Lily (maybe use Three.JS and Point-cloud model)
