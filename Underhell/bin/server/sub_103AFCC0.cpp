int __thiscall sub_103AFCC0(unsigned int this)
{
  int result; // eax
  int v3; // edi
  double v4; // st6
  char *v5; // eax
  int v6; // edi
  char *v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edx
  char *v11; // eax
  char Buffer[256]; // [esp+2Ch] [ebp-104h] BYREF
  float v13; // [esp+12Ch] [ebp-4h]

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = sub_100BE820(this, dword_106EAD9C);
    v5 = sub_1001E280(Buffer, "Ideal Height: %.1f; Height: %.1f", *(float *)(this + 3868), v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)v5, 0.0, 255, 255, 255, 255);
    v6 = v3 + 1;
    if ( sub_100B8E40((float *)(this + 3936)) )
    {
      v7 = sub_1001E280(Buffer, "Free pass: %.1f", *(float *)(this + 3948));
      sub_100D5DE0((_DWORD *)this, v6++, (int)v7, 0.0, 255, 255, 255, 255);
    }
    v8 = sub_1025FB50(1);
    v9 = v8;
    if ( v8 )
    {
      if ( sub_100AB070(*(_DWORD **)(this + 2404), v8) && sub_100AAC30(*(_DWORD ***)(this + 2404), v9) )
      {
        sub_100D5DE0((_DWORD *)this, v6++, (int)"See player", 0.0, 255, 255, 255, 255);
      }
      else
      {
        v13 = *(float *)(this + 3948);
        *(float *)(this + 3948) = 0.0;
        if ( sub_100CEF80(this, v10, v9, 16449, 0)
          && !(*(unsigned __int8 (__thiscall **)(unsigned int, unsigned int, int, _DWORD))(*(_DWORD *)this + 548))(
                this,
                v9,
                16449,
                0) )
        {
          sub_100D5DE0((_DWORD *)this, v6++, (int)"Player peeking", 0.0, 255, 255, 255, 255);
        }
        *(float *)(this + 3948) = v13;
      }
    }
    if ( 1.0 == *(float *)(this + 3812) )
    {
      return v6;
    }
    else
    {
      v11 = sub_1001E280(Buffer, "Speed scaled to %.1f", *(float *)(this + 800));
      sub_100D5DE0((_DWORD *)this, v6, (int)v11, 0.0, 255, 255, 255, 255);
      return v6 + 1;
    }
  }
  return result;
}
