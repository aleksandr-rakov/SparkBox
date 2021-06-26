// Icon bitmap definitions

#define bat_pos 92
#define bat_width 35
#define bat_height 16
static uint8_t bat00_bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 
  0x07, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 
  0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 
  0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x07, 
  0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

const uint8_t bat33_bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFD, 0x0F, 
  0x00, 0x00, 0x01, 0xFD, 0x0F, 0x00, 0x00, 0x01, 0xFD, 0x0F, 0x00, 0x00, 
  0x07, 0xFD, 0x0F, 0x00, 0x00, 0x04, 0xFD, 0x0F, 0x00, 0x00, 0x04, 0xFD, 
  0x0F, 0x00, 0x00, 0x04, 0xFD, 0x0F, 0x00, 0x00, 0x04, 0xFD, 0x0F, 0x00, 
  0x00, 0x04, 0xFD, 0x0F, 0x00, 0x00, 0x04, 0xFD, 0x0F, 0x00, 0x00, 0x07, 
  0xFD, 0x0F, 0x00, 0x00, 0x01, 0xFD, 0x0F, 0x00, 0x00, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

static uint8_t bat66_bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFD, 0xFF, 
  0x3F, 0x00, 0x01, 0xFD, 0xFF, 0x3F, 0x00, 0x01, 0xFD, 0xFF, 0x3F, 0x00, 
  0x07, 0xFD, 0xFF, 0x3F, 0x00, 0x04, 0xFD, 0xFF, 0x3F, 0x00, 0x04, 0xFD, 
  0xFF, 0x3F, 0x00, 0x04, 0xFD, 0xFF, 0x3F, 0x00, 0x04, 0xFD, 0xFF, 0x3F, 
  0x00, 0x04, 0xFD, 0xFF, 0x3F, 0x00, 0x04, 0xFD, 0xFF, 0x3F, 0x00, 0x07, 
  0xFD, 0xFF, 0x3F, 0x00, 0x01, 0xFD, 0xFF, 0x3F, 0x00, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

static uint8_t bat100_bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFD, 0xFF, 
  0xFF, 0x7F, 0x01, 0xFD, 0xFF, 0xFF, 0x7F, 0x01, 0xFD, 0xFF, 0xFF, 0x7F, 
  0x07, 0xFD, 0xFF, 0xFF, 0x7F, 0x04, 0xFD, 0xFF, 0xFF, 0xFF, 0x05, 0xFD, 
  0xFF, 0xFF, 0xFF, 0x05, 0xFD, 0xFF, 0xFF, 0xFF, 0x05, 0xFD, 0xFF, 0xFF, 
  0xFF, 0x05, 0xFD, 0xFF, 0xFF, 0x7F, 0x04, 0xFD, 0xFF, 0xFF, 0x7F, 0x07, 
  0xFD, 0xFF, 0xFF, 0x7F, 0x01, 0xFD, 0xFF, 0xFF, 0x7F, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

static uint8_t batcharging_bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFD, 0xFF, 
  0xFF, 0x7F, 0x01, 0xFD, 0x7F, 0xFC, 0x7F, 0x01, 0xFD, 0x1F, 0xFC, 0x7F, 
  0x07, 0xFD, 0x03, 0xF8, 0x7F, 0x04, 0x7D, 0x00, 0xF8, 0xFF, 0x05, 0x1D, 
  0x00, 0xF0, 0xFF, 0x05, 0xFD, 0x3F, 0x00, 0xE0, 0x05, 0xFD, 0x7F, 0x00, 
  0xF8, 0x05, 0xFD, 0x7F, 0x00, 0x7F, 0x04, 0xFD, 0xFF, 0xE0, 0x7F, 0x07, 
  0xFD, 0xFF, 0xF8, 0x7F, 0x01, 0xFD, 0xFF, 0xFF, 0x7F, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

#define btlogo_pos 0
#define bt_width 11
#define bt_height 16
static uint8_t bt_bits[] = {
  0x60, 0x00, 0xA0, 0x00, 0x20, 0x01, 0x21, 0x02, 0x22, 0x01, 0xA4, 0x00, 
  0x68, 0x00, 0x30, 0x00, 0x30, 0x00, 0x68, 0x00, 0xA4, 0x00, 0x22, 0x01, 
  0x21, 0x02, 0x20, 0x01, 0xA0, 0x00, 0x60, 0x00, };

#define rssi_pos 11
#define rssi_width 15
#define rssi_height 16
static uint8_t rssi_bits[] = {
  0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x77, 0x00, 0x77, 
  0x00, 0x77, 0x00, 0x77, 0x00, 0x77, 0x70, 0x77, 0x70, 0x77, 0x70, 0x77, 
  0x70, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, };

#define icon_width 16
#define icon_height 16
#define drive_pos 27
static uint8_t drive_off_bits[] = {
  0xFF, 0xFF, 0x01, 0x80, 0x7D, 0x80, 0x85, 0x80, 0x85, 0x80, 0x85, 0x80, 
  0x85, 0x80, 0x85, 0x80, 0x7D, 0x80, 0x01, 0xB8, 0x01, 0x88, 0x01, 0x88, 
  0x01, 0x88, 0x01, 0x88, 0x01, 0x80, 0xFF, 0xFF, };

static uint8_t drive_on_bits[] = {
  0x00, 0x00, 0xFE, 0x7F, 0x82, 0x7F, 0x7A, 0x7F, 0x7A, 0x7F, 0x7A, 0x7F, 
  0x7A, 0x7F, 0x7A, 0x7F, 0x82, 0x7F, 0xFE, 0x47, 0xFE, 0x77, 0xFE, 0x77, 
  0xFE, 0x77, 0xFE, 0x77, 0xFE, 0x7F, 0x00, 0x00, };

#define mod_pos 43
static uint8_t mod_off_bits[] = {
  0xFF, 0xFF, 0x01, 0x80, 0x0D, 0x83, 0x0D, 0x83, 0x95, 0x82, 0xF5, 0x82, 
  0x65, 0xA2, 0x05, 0xA2, 0x05, 0xA2, 0x01, 0xB8, 0x01, 0xA4, 0x01, 0xA4, 
  0x01, 0xA4, 0x01, 0xB8, 0x01, 0x80, 0xFF, 0xFF, };

static uint8_t mod_on_bits[] = {
  0x00, 0x00, 0xFE, 0x7F, 0xF2, 0x7C, 0xF2, 0x7C, 0x6A, 0x7D, 0x0A, 0x7D, 
  0x9A, 0x5D, 0xFA, 0x5D, 0xFA, 0x5D, 0xFE, 0x47, 0xFE, 0x5B, 0xFE, 0x5B, 
  0xFE, 0x5B, 0xFE, 0x47, 0xFE, 0x7F, 0x00, 0x00, };

#define delay_pos 59
static uint8_t delay_off_bits[] = {
  0xFF, 0xFF, 0x01, 0x80, 0x7D, 0x80, 0x85, 0x80, 0x85, 0x80, 0x85, 0x80, 
  0x85, 0x80, 0x85, 0xA4, 0x7D, 0xA4, 0x01, 0xA4, 0x01, 0xA4, 0x01, 0xBC, 
  0x01, 0xA0, 0x01, 0xBC, 0x01, 0x80, 0xFF, 0xFF, };

static uint8_t delay_on_bits[] = {
  0x00, 0x00, 0xFE, 0x7F, 0x82, 0x7F, 0x7A, 0x7F, 0x7A, 0x7F, 0x7A, 0x7F, 
  0x7A, 0x7F, 0x7A, 0x5B, 0x82, 0x5B, 0xFE, 0x5B, 0xFE, 0x5B, 0xFE, 0x43, 
  0xFE, 0x5F, 0xFE, 0x43, 0xFE, 0x7F, 0x00, 0x00, };

#define rev_pos 75
static uint8_t rev_off_bits[] = {
  0xFF, 0xFF, 0x01, 0x80, 0x7D, 0x80, 0x45, 0x80, 0x45, 0x80, 0x3D, 0x80, 
  0x65, 0x80, 0x45, 0x80, 0xC5, 0xA2, 0x01, 0xA2, 0x01, 0x94, 0x01, 0x94, 
  0x01, 0x88, 0x01, 0x88, 0x01, 0x80, 0xFF, 0xFF, };

static uint8_t rev_on_bits[] = {
  0x00, 0x00, 0xFE, 0x7F, 0x82, 0x7F, 0xBA, 0x7F, 0xBA, 0x7F, 0xC2, 0x7F, 
  0x9A, 0x7F, 0xBA, 0x7F, 0x3A, 0x5D, 0xFE, 0x5D, 0xFE, 0x6B, 0xFE, 0x6B, 
  0xFE, 0x77, 0xFE, 0x77, 0xFE, 0x7F, 0x00, 0x00, };
