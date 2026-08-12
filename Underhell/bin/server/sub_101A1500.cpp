int __thiscall sub_101A1500(_BYTE *this)
{
  bool v2; // zf
  signed int v3; // eax
  void (__thiscall *v4)(_BYTE *, _BYTE *); // edx
  _BYTE v6[8]; // [esp+4h] [ebp-24h] BYREF
  int v7; // [esp+Ch] [ebp-1Ch]
  int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-Ch]
  int v10; // [esp+24h] [ebp-4h] BYREF

  if ( this[5008] )
    return sub_10340F00((int)this);
  switch ( *((_DWORD *)this + 581) )
  {
    case 1:
      v10 = 1;
      goto LABEL_12;
    case 2:
      v3 = sub_10219A30() & 0x80000001;
      v2 = v3 == 0;
      if ( v3 < 0 )
        v2 = (((_BYTE)v3 - 1) | 0xFFFFFFFE) == -1;
      if ( v2 )
      {
        v4 = *(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 1148);
        v7 = 0;
        v8 = -1;
        v9 = 0;
        v4(this, v6);
        return sub_10340F00((int)this);
      }
      v10 = 2;
      sub_10031670((_DWORD *)this + 212, &v10);
      break;
    case 3:
      v10 = 3;
LABEL_12:
      sub_10031670((_DWORD *)this + 212, &v10);
      break;
  }
  return sub_10340F00((int)this);
}
