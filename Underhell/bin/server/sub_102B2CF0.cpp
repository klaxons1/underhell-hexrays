void __thiscall sub_102B2CF0(float *this)
{
  float v2; // [esp+4h] [ebp-18h]
  float v3; // [esp+8h] [ebp-14h]
  float v4; // [esp+Ch] [ebp-10h]
  float v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = this[955] - this[145];
  v6 = this[956] - this[146];
  v7 = this[957] - this[147];
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v2 = this[905] - this[145];
  v3 = this[906] - this[146];
  v4 = this[907] - this[147];
  off_10689714();
  off_10689714();
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2276))(this)
    || this[952] + 5.0 <= *(float *)(dword_106B31C8 + 12) )
  {
    this[949] = v2;
    this[950] = v3;
    this[951] = v4;
  }
  else
  {
    this[949] = v5;
    this[950] = v6;
    this[951] = v7;
  }
}
