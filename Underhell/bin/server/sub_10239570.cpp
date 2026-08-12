int __thiscall sub_10239570(int this)
{
  unsigned int v2; // eax
  int result; // eax
  char *v4; // eax
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi
  float v13; // [esp+4h] [ebp-10h]

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 928);
  if ( v2 == -1
    || (result = v2 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 1] )
  {
    v4 = *(char **)(this + 924);
    if ( v4 )
    {
      v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
      *(_DWORD *)(this + 928) = v5 ? *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5) : -1;
      v6 = *(_DWORD *)(this + 928);
      if ( v6 != -1 )
      {
        v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 1];
        v8 = v6 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 2] == v8 )
        {
          if ( *v7 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 2] == v8 )
              v9 = *v7;
            else
              v9 = 0;
            *(_DWORD *)(this + 932) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                                        dword_106B31D0,
                                        *(_DWORD *)(v9 + 24));
          }
        }
      }
    }
    v10 = *(_DWORD *)(this + 928);
    if ( v10 != -1
      && (result = v10 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 2] == result)
      && off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 1] )
    {
      if ( (*(_BYTE *)(this + 248) & 1) == 0 )
      {
        *(_DWORD *)(this + 252) |= 0x80u;
        result = sub_100D8500((_DWORD *)this);
      }
    }
    else
    {
      *(_DWORD *)(this + 928) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                 dword_106B31D0,
                 *(_DWORD *)(this + 24));
      *(_DWORD *)(this + 932) = result;
    }
  }
  if ( *(_BYTE *)(this + 912) )
  {
    v11 = *(_DWORD *)(dword_106B31C8 + 72);
    v12 = 8;
    if ( v11 == 2
      || v11 == 1
      || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 140))(dword_106B3CDC) )
    {
      v12 = 0;
    }
    if ( *(int *)(this + 888) > 0 )
      sub_102386F0(this, v12 | 3);
    v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)this, v13, 0);
  }
  return result;
}
