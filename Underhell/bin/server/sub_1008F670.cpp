int __thiscall sub_1008F670(_DWORD *this, float *a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9)
{
  int result; // eax
  void *v10; // eax
  int v11; // esi
  void *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( !sub_1008F280(this, a9, a2, a3, a8, a4, (float *)v15) )
    return 0;
  v10 = (void *)sub_1042FCC0(48);
  if ( v10 )
    v11 = sub_100B9A20(v10, a3, a7, a9, a5, a6);
  else
    v11 = 0;
  v12 = (void *)sub_1042FCC0(48);
  if ( v12 )
    result = sub_100B9A20(v12, (int)v15, 0.0, a9, 1, -1);
  else
    result = 0;
  v13 = *(_DWORD *)(result + 40);
  if ( v13 )
    *(_DWORD *)(v13 + 44) = 0;
  *(_DWORD *)(result + 40) = v11;
  if ( v11 )
  {
    v14 = *(_DWORD *)(v11 + 44);
    if ( v14 )
      *(_DWORD *)(v14 + 40) = 0;
    *(_DWORD *)(*(_DWORD *)(result + 40) + 44) = result;
  }
  return result;
}
