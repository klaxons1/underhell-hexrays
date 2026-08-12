int __thiscall sub_10082C30(_DWORD **this)
{
  bool v2; // zf
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  float *v5; // eax
  int result; // eax
  char *v7; // eax
  char *v8; // eax
  _DWORD *v9; // ecx
  char Buffer[256]; // [esp+18h] [ebp-140h] BYREF
  int v11[14]; // [esp+118h] [ebp-40h] BYREF
  int v12; // [esp+150h] [ebp-8h]
  float *v13; // [esp+154h] [ebp-4h]

  if ( this[3] == (_DWORD *)1 )
  {
    if ( (this[1][64] & 1) != 0 )
    {
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v8 = sub_1001E280(Buffer, "[Nav] %s", "Jump stop\n");
        sub_10029660(this[1], (int)v8);
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*this[5] + 36))(this[5]) == 1 )
      {
        v9 = this[9];
        this[3] = 0;
        if ( (unsigned __int8)sub_100A61C0(v9) )
        {
          ((void (__thiscall *)(_DWORD **))(*this)[12])(this);
          return 0;
        }
        else
        {
          sub_100820C0((int)this);
          return 1;
        }
      }
      return 0;
    }
LABEL_15:
    (*(void (__thiscall **)(_DWORD *))(*this[5] + 32))(this[5]);
    return 0;
  }
  v2 = (this[1][64] & 1) == 0;
  v13 = (float *)this[1];
  if ( v2 )
    goto LABEL_15;
  memset(v11, 0, sizeof(v11));
  v3 = this[9];
  v4 = this[6];
  v12 = sub_1007E610((int)this);
  v5 = (float *)sub_100A6030(v3);
  sub_1007C550(v4, 1, v13 + 179, v5, 33701899, v12, 100.0, 0, (float *)v11);
  result = v11[0];
  if ( v11[0] >= 0 )
  {
    this[3] = (_DWORD *)1;
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v7 = sub_1001E280(Buffer, "[Nav] %s", "Jump start\n");
      sub_10029660(this[1], (int)v7);
    }
    (*(void (__thiscall **)(_DWORD *, int *))(*this[5] + 28))(this[5], &v11[10]);
    return 0;
  }
  return result;
}
