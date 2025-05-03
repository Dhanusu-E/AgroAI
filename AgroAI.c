include <stdio.h>

int getSoilMoisture() { return 30;

}

int getTemperature() { return 35;

}

int getHumidity() { return 45;

}

void aiDecision (int moisture, int temp, int humidity) {

printf("Soil Moisture: %d%%\n", moisture);

printf("Temperature: %d°C\n", temp);

printf("Humidity: %d%%\n", humidity);

if (moisture < 40 && temp > 30) {

printf("Action: Start irrigation Dry soil & High temperature detected.\n");

} else if (moisture >= 40 && humidity < 50) {

printf("Action: Alert! Pest risk due to low humidity.\n");

} else {

printf("Action: Conditions normal. No action needed.\n");

}

}

int main() {

int soilMoisture = getSoilMoisture();

int temperature = getTemperature();

int humidity getHumidity();

aiDecision(soilMoisture, temperature, humidity);

return 0;

}
