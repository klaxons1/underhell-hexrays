int __thiscall sub_100D1B70(const char **this)
{
  int result; // eax
  const char *v3; // eax
  const char *v4; // eax
  int v5; // ecx
  int v6; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  result = (*((int (__thiscall **)(const char **))*this + 336))(this);
  if ( (_BYTE)result )
  {
    v3 = this[23];
    Buffer[0] = 0;
    if ( !v3 )
      v3 = String;
    sub_1001E280(Buffer, "#valve_hint_alt_%s", v3);
    v4 = this[280];
    if ( v4 != (const char *)-1
      && off_1061BE18[4 * ((unsigned int)this[280] & 0xFFF) + 2] == (unsigned int)v4 >> 12
      && (v5 = off_1061BE18[4 * ((unsigned int)this[280] & 0xFFF) + 1]) != 0 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
    }
    else
    {
      v6 = 0;
    }
    sub_102600F0(v6, Buffer);
    result = 1;
    ++this[314];
    *((_BYTE *)this + 1264) = 1;
    *((float *)this + 318) = *(float *)(dword_106B31C8 + 12) + 7.0;
  }
  return result;
}
