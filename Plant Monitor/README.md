# Plant Minotor

# Peace Lily: Fresh, Green & Air-purifying
    As fresh as summer breeze!
    
    [icon . logo]
    
    enjoys moist soil and low-light conditions.
    
<!-- ## :closed_book: Table of Content
markdown: https://ithelp.ithome.com.tw/articles/10203758
icon: https://github.com/ikatyang/emoji-cheat-sheet#book-paper

    Table of Content
    1_
    2_
    3_
    4_
    5_
 -->
 
<!-- ## :herb:  Background -->
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
        * 

<img src="https://user-images.githubusercontent.com/52306317/139738207-40bf5fb8-8830-4b9f-90d1-053e4072d1ae.png" alt="Cover" width="70%"/>

**Reference:**

[1] Patch Plant- https://www.patchplants.com/gb/en/plants/peace-lily-164/

[2] Gardening Know How- https://www.gardeningknowhow.com/houseplants/peace-lily/peace-lily-plants.htm

[3] PLANTOPHILES- https://plantophiles.com/plant-care/peace-lily/


## Board & Sensor

- **Feather Huzzah ESP8266 Wifi**

    * The ESP8266 runs on 3.3V power and logic, and unless otherwise specified.
    
    * The analog pin is also 1.0V max

        https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/pinouts


- **Sensor Information**

    * DHT22


        | DHT22             | Description       |
        | ---------------   | ---------------   |
        | Humidity Reading           | 0 - 100% humidity             |
        | Humidity Accuracy         | 2 - 5%              |
        | Temperature Reading         | -40 to 80°C               |
        | Temperature Accuracy         | ±0.5°C              |
        | Sampling Rate         | 0.5Hz (every 2 seconds)            |

    
        Test and Calibrate
        https://www.kandrsmith.org/RJS/Misc/Hygrometers/calib_dht22.html
    
    
    * Nail Soil Sensor
    
        https://www.instructables.com/Moisture-Detection-With-Two-Nails/
        
        https://www.instructables.com/DIY-SOIL-MOISTURE-SENSOR-CHEAP-YET-ACCURATE-/

**Reference:**

[1] https://learn.adafruit.com/dht

[2] https://www.instructables.com/Moisture-Detection-With-Two-Nails/




<!-- ## :soccer:  Goals -->
## Goals

Detailed to Peace Lily's characteristics

1. ddd
2. xxx
3. aaa

<!-- ## :rocket:  Process -->
## Process


[Flow Chart]


### 1. Set Up Feather Huzzah ESP8266 Wifi

[highlight key scripts!]

### 2. Build a Soil Moisture Sensor

* we added an NPN transistor so that we could turn off the voltage going to the nails to reduce electrolysis (ie we literally have a switch that turns off that part of the circuit when we are not taking a reading)

* [Circuit diagram]


<img src="https://user-images.githubusercontent.com/52306317/139733132-b2756297-6bf7-4328-a4ed-289d1a90525c.png" alt="Cover" width="70%"/>



### 3. Publish Data to MQTT
* Time: 27 Oct at 13:14
* Location: CE Lab
* Data: 
    * Temperature: 24.3
    * Humidity: 56
    * Moisture: 63
    
- [x] Temperature
- [x] Humidity
- [ ] Moisture --> I feel like a bit of wet (need consistently moist soil). --> will try keep on ????? --> the unit for moisture????? -->The more water in the soil, the less resistance we'll get (and vice versa).


* **Data Explanation!!!**

Test: touch two nails together -> +800
Plant Moisture: 63


<!-- 
<img src="https://user-images.githubusercontent.com/52306317/139733138-9d40d31d-51e7-4e33-a466-e937f463040f.png" alt="Cover" width="70%"/> 
<img src="https://user-images.githubusercontent.com/52306317/139733918-5720f514-1dd8-427c-b837-a1ce4b68e0d3.png" alt="Cover" width="70%"/> -->

<!-- <img src="https://user-images.githubusercontent.com/52306317/139734620-95ea74d5-7ccf-4679-995a-fbd00e14d0a1.png" alt="Cover" width="100%"/> -->

<img src="https://user-images.githubusercontent.com/52306317/139737681-edaf7c36-f0b5-4d22-8b80-97ce727a76e6.png" alt="Cover" width="70%"/>



https://user-images.githubusercontent.com/52306317/139734037-1826e990-f15e-4771-b7ad-bd7aefabf9c4.mp4


<!-- <video src="https://user-images.githubusercontent.com/52306317/139717019-878370eb-f470-4fd0-84df-83938561631a.mp4" type="video/mp4" width="40%"/> -->


### 4. Store data on a RPi gateway
heeheheeheheeheheeheheeheheehe


### 5. Visualise time series data

heeheheeheheeheheeheheehe

<!-- ## :teddy_bear:  Next Step -->
## Reflection

* Steel Nail
    
    * Distance between two nails


<!-- ## :christmas_tree:  Reference -->
## Reference
