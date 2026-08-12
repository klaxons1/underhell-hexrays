float *__thiscall sub_1003BCF0(float *this, float *a2)
{
  float *result; // eax
  int v4; // [esp+8h] [ebp-Ch] BYREF
  char v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  if ( this == (float *)sub_100422D0() )
  {
    sub_10038150((int)this);
    result = a2;
    *a2 = this[61];
    a2[1] = this[62];
    a2[2] = this[63];
  }
  else
  {
    v6 = flt_10433C50;
    v5 = byte_10433C4C;
    v4 = dword_10433C48;
    dword_10433C48 = (int)&v4;
    byte_10433C4C = 1;
    sub_1003A0F0((int)(this + 140), (int)a2, *((float *)off_103DC81C + 3));
    flt_10433C50 = v6;
    result = (float *)v4;
    byte_10433C4C = v5;
    dword_10433C48 = v4;
  }
  return result;
}
