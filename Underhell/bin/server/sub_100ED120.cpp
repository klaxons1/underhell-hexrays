int __thiscall sub_100ED120(float *this, int a2)
{
  int v4; // edi
  const char *v5; // eax
  const char *v6; // eax
  int result; // eax
  const char *v8; // eax
  char *String1; // [esp+14h] [ebp-4h]
  float *v10; // [esp+20h] [ebp+8h]

  this[a2 + 419] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                     dword_106B31E4,
                     0.5,
                     1.0);
  String1 = (char *)sub_100BF870((int)this, a2);
  v4 = 0;
  if ( sub_100BF790((int)this) > 0 )
  {
    v10 = this + 419;
    do
    {
      if ( v4 != a2 )
      {
        v5 = (const char *)sub_100BF870((int)this, v4);
        if ( !_stricmp(String1, v5) )
          *v10 = 0.0;
      }
      ++v10;
      ++v4;
    }
    while ( v4 < sub_100BF790((int)this) );
  }
  v6 = (const char *)sub_100BF7F0((int)this, a2);
  result = strncmp("right_", v6, 6u);
  if ( result )
  {
    v8 = (const char *)sub_100BF7F0((int)this, a2);
    result = strncmp("left_", v8, 5u);
    if ( !result )
      this[a2 + 418] = this[a2 + 419];
  }
  else
  {
    this[a2 + 420] = this[a2 + 419];
  }
  return result;
}
