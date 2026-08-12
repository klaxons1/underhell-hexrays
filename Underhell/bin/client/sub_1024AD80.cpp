int __thiscall sub_1024AD80(int this)
{
  int result; // eax
  int v3; // ecx
  bool v4; // sf
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // edi
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v15[4]; // [esp+18h] [ebp-8h] BYREF
  _BYTE v16[4]; // [esp+1Ch] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v11, (int)v15);
  result = v11 - *(_DWORD *)(this + 240);
  v3 = *(_DWORD *)(this + 232);
  v11 = result;
  if ( v3 == 1 )
  {
    v4 = *(int *)(this + 260) < 0;
    if ( !*(_DWORD *)(this + 260) )
    {
      if ( *(_BYTE *)(this + 282) || *(_BYTE *)(this + 283) )
      {
        (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 216) + 8))(
          *(_DWORD *)(this + 216),
          &v12,
          &v13);
        return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 216) + 16))(
                 *(_DWORD *)(this + 216),
                 v11,
                 v13);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 216) + 8))(
          *(_DWORD *)(this + 216),
          &v13,
          &v12);
        v5 = *(_DWORD *)(this + 216);
        if ( v12 >= v14 )
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 16))(v5, v14);
        else
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 16))(v5, v12);
      }
    }
  }
  else
  {
    v4 = *(int *)(this + 260) < 0;
  }
  if ( !v4 )
  {
    v6 = 0;
    v7 = 0;
    if ( v3 > 0 )
    {
      v8 = 0;
      do
      {
        v9 = *(_DWORD *)(v8 + *(_DWORD *)(this + 220));
        if ( v9 && v7 != *(_DWORD *)(this + 260) )
        {
          (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v9 + 12))(v9, &v13, &v12);
          v6 += v13;
        }
        ++v7;
        v8 += 12;
      }
      while ( v7 < *(_DWORD *)(this + 232) );
      result = v11;
    }
    result -= v6;
    v10 = result;
    if ( result >= 0 )
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *, int *))(**(_DWORD **)(this + 216) + 12))(
        *(_DWORD *)(this + 216),
        v16,
        &v14);
      return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 216) + 16))(
               *(_DWORD *)(this + 216),
               v10,
               v14);
    }
  }
  return result;
}
