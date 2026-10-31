// 9. Detect a Stable Sensor
// Topic: Consecutive values, conditions, pattern detection
// Difficulty: Moderate
// Time: 25 minutes
// File: 9_stable_sensor.c
// A sensor is considered stable if the same reading occurs at least 3 consecutive times.
// Example:
// 10 10 10 12 14 14 15
// Output:
// Sensor was stable.
// But:
// 10 10 12 12 13 14
// should produce:
// Sensor was not stable.