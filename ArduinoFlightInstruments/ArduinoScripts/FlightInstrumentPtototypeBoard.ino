///////////////////////////////////////////////////////////////////////////////////////////////////
// Serial communication
byte const BYTECODE_HANDSHAKE = 0;
byte const BYTECODE_ACKNOWLEDGE = 1;
byte const BYTECODE_ERROR = 2;

byte const BYTECODE_GIVE_AUTHORITY = 16;
byte const BYTECODE_

bool g_hasAuthority = true;


///////////////////////////////////////////////////////////////////////////////////////////////////
// Components



///////////////////////////////////////////////////////////////////////////////////////////////////
// Arduino execution functions
void setup()
{
  SetupSerial();
  SetupBoard();
}

void loop()
{
  UpdateBoard();
  UpdateSerial();
}



///////////////////////////////////////////////////////////////////////////////////////////////////
// Board component updates
void SetupBoard()
{
  
}

void UpdateBoard()
{
  
}



///////////////////////////////////////////////////////////////////////////////////////////////////
// Serial updates
void SetupSerial()
{
  // Serial
  Serial.begin(9600);
}

void UpdateSerial()
{
  if (g_hasAuthority)
  {
    SendComponentStatesToSerial();
  }
  else
  {
    ReceiveOutputsFromSerial();
  }
}

void SendSerial()
{
  
}