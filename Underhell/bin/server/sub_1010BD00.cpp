float *__thiscall sub_1010BD00(float *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  float *result; // eax
  char String[256]; // [esp+4h] [ebp-100h] BYREF

  this[6] = 0.0;
  v3 = ++dword_1069A898;
  this[3] = 0.0;
  *((_DWORD *)this + 5) = v3;
  v4 = a2;
  *this = 0.0;
  this[2] = 0.0;
  this[1] = 0.0;
  this[4] = NAN;
  if ( !v4 )
    return this;
  v5 = sub_1025F620(String, v4, 44);
  if ( String[0] )
    *this = *(float *)sub_10162BE0(&a2, String);
  v6 = sub_1025F620(String, v5, 44);
  if ( String[0] )
    this[1] = *(float *)sub_10162BE0(&a2, String);
  else
    this[1] = *(float *)sub_10162BE0(&a2, "Use");
  v7 = sub_1025F620(String, v6, 44);
  if ( String[0] )
    this[2] = *(float *)sub_10162BE0(&a2, String);
  v8 = sub_1025F620(String, v7, 44);
  if ( String[0] )
    this[3] = atof(String);
  sub_1025F620(String, v8, 44);
  if ( !String[0] )
    return this;
  v9 = atoi(String);
  *((_DWORD *)this + 4) = v9;
  v10 = v9 == 0;
  result = this;
  if ( v10 )
    this[4] = NAN;
  return result;
}
