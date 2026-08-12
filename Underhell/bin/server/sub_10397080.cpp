bool __thiscall sub_10397080(int this)
{
  int v2; // ecx
  char v3; // al
  char v4; // bl
  unsigned int v5; // eax
  int *v6; // ecx
  _DWORD *v7; // edi
  int v8; // ecx
  int *v10; // edi
  int v11; // ebx
  int v12; // eax
  _BYTE v13[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 196))(v2);
  else
    v3 = sub_10022390((float *)this);
  v4 = v3;
  if ( v3
    || !sub_10051BB0(this + 4508)
    && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4460) + 1364))(*(_DWORD *)(this + 4460)) != this + 4456
     || !sub_1004CAF0(this + 4456))
    || (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) != 3 )
  {
    return v4;
  }
  v5 = *(_DWORD *)(*(_DWORD *)(this + 2588) + 128);
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 2588) + 128) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 2588) + 128) & 0xFFF) + 2] == v5 >> 12 )
    {
      v7 = (_DWORD *)*v6;
      if ( *v6 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*v7 + 320))(*v6) )
        {
          v8 = v7[106];
          if ( v8 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
              return 0;
          }
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 284))(v7) )
            return 0;
        }
      }
    }
  }
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v10 = (int *)sub_10261B20();
  else
    v10 = 0;
  v11 = *v10;
  v12 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v13);
  return (*(unsigned __int8 (__thiscall **)(int *, int))(v11 + 872))(v10, v12) == 0;
}
