const int sensor_pin = 1;
int pulse_signal = 0;
float BPM = 0;


// Declaring storage data
bool any_peak_detected = false;
bool first_peak_detected = false;
unsigned long first_pulse_time = 0;
unsigned long second_pulse_time = 0;

int upper_threshold = 950;
int lower_threshold = 775;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);

  delay(75);
  delay(50);
  if (pulse_signal > upper_threshold && any_peak_detected ==
  false) {
    any_peak_detected = true;
    first_peak_detected = true;
  } 

}



