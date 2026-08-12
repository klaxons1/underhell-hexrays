int __thiscall sub_10394FF0(int *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edi
  float *v8; // ebx
  int v9; // eax
  int (__thiscall *v10)(int *); // edx
  int v11; // edi
  float v12; // [esp+Ch] [ebp-4h]

  if ( sub_101C5260(this) )
  {
    if ( !*((_BYTE *)this + 2680) )
    {
      v2 = sub_101C5260(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
        return 97;
      v4 = sub_101C5260(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4) )
      {
        v5 = *this;
        v6 = sub_101C5260(this);
        if ( (*(int (__thiscall **)(int *, int))(v5 + 1080))(this, v6) == 3 )
        {
          v7 = sub_101C5260(this);
          v12 = sub_100737D0(this[419]);
          v8 = (float *)((*(int (__thiscall **)(int *))(*this + 576))(this) + 8);
          if ( v12 * 0.5 < *v8 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7) + 8) )
            return 97;
        }
      }
    }
  }
  if ( !sub_10023D10(this, 67) )
    return 0;
  if ( *((_BYTE *)this + 2680) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 2396))(this) )
    return 0;
  v9 = sub_101679A0((int)"gordon_precriminal");
  if ( sub_10167A00(v9) == 1 )
    return 0;
  v10 = *(int (__thiscall **)(int *))(*this + 2424);
  *((_BYTE *)this + 4448) = 1;
  v11 = v10(this);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 4) + 1364))(*(_DWORD *)(v11 + 4)) == v11 )
  {
    if ( this[906] )
      *((_BYTE *)this + 3648) = 1;
  }
  return 68;
}
