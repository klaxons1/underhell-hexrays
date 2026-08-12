int __thiscall sub_100B7F90(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int result; // eax
  unsigned int v8; // eax
  int v9; // ebx
  float *v10; // eax
  int v11; // ebx
  float v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+20h] [ebp+8h]

  v3 = *(_DWORD *)(this + 3648);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( sub_100B5320(a2, v5) )
  {
    result = sub_101ACC70(a2, 1);
    if ( !result )
      return result;
    if ( a2 )
      *(_DWORD *)(this + 3648) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(this + 3648) = -1;
    v8 = *(_DWORD *)(this + 3644);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    v12 = sub_100B5850(v9, a2, 1);
    if ( sub_100B5850(v9, a2, 0) >= v12 )
    {
      result = 1;
      *(_BYTE *)(this + 3692) = 1;
      *(_BYTE *)(this + 3732) = 1;
      return result;
    }
  }
  else
  {
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v11 = sub_100B5D00((float *)this, a2, v10, 0.0, 0, 0);
    result = sub_101ACC70(v11, 1);
    if ( !result )
      return result;
    sub_100B7E60(this, v11);
    if ( a2 )
      *(_DWORD *)(this + 3648) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(this + 3648) = -1;
    v13 = sub_100B5850(v11, a2, 1);
    if ( sub_100B5850(v11, a2, 0) >= v13 )
    {
      result = 1;
      *(_BYTE *)(this + 3692) = 1;
      *(_BYTE *)(this + 3732) = 1;
      return result;
    }
  }
  result = 0;
  *(_BYTE *)(this + 3692) = 1;
  *(_BYTE *)(this + 3732) = 0;
  return result;
}
