int __thiscall sub_102BC470(_DWORD *this)
{
  char *v2; // edi
  int v3; // eax
  int v4; // ebx
  int *v5; // ecx
  float v7; // [esp+14h] [ebp-28h]
  _BYTE v8[12]; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE v9[12]; // [esp+2Ch] [ebp-10h] BYREF
  int v10; // [esp+38h] [ebp-4h]

  --this[314];
  v10 = sub_100BEF30((int)this, "headcrab");
  if ( sub_100BCCA0(this, v10, (int)v8, (int)v9) )
  {
    v2 = (char *)sub_101811E0((const char *)*(&off_106614CC + this[313]), -1);
    v3 = *((_DWORD *)v2 + 62);
    v4 = v3 | 4;
    if ( v3 != (v3 | 4) )
    {
      if ( v2[84] )
      {
        v2[88] |= 1u;
      }
      else
      {
        v5 = (int *)*((_DWORD *)v2 + 6);
        if ( v5 )
          sub_100194B0(v5, 248);
      }
      *((_DWORD *)v2 + 62) = v4;
    }
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v2 + 76))(v2, this);
    sub_10260750(v2);
    (*(void (__thiscall **)(char *, _DWORD *, int))(*(_DWORD *)v2 + 140))(v2, this, v10);
    sub_100E10C0((int)v2, &flt_106F1CA8);
    sub_100E11A0((int)v2, &flt_106F1CB4);
    sub_10369A80(v2);
  }
  if ( !this[314] )
    return sub_100EC3F0(this, 0, *(float *)(dword_106B31C8 + 12), off_106614DC);
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         1.0,
         2.0)
     + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0(this, (int)sub_102BC470, v7, off_106614DC);
}
