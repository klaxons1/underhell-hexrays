char __thiscall sub_1024CF10(int this, int a2, int a3, int a4, int a5, int *a6, int *a7)
{
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  bool v12; // dl
  int v13; // eax
  int v14; // ecx
  bool v15; // cl
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  char v22; // [esp+13h] [ebp-5h]
  int v23; // [esp+14h] [ebp-4h] BYREF
  int v24; // [esp+20h] [ebp+8h]
  bool v25; // [esp+24h] [ebp+Ch]

  v9 = a2 + a4;
  v22 = 0;
  v24 = a3 + a5;
  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 204), (int)&a5, (int)&v23);
  v10 = *a7;
  v12 = 1;
  if ( *a7 <= a3 || v10 >= v24 )
  {
    v11 = v10 + v23;
    if ( (v10 + v23 <= a3 || v11 >= v24) && (v10 >= a3 || v11 <= v24) )
      v12 = 0;
  }
  v13 = *a6;
  v15 = 1;
  if ( *a6 <= a2 || v13 >= v9 )
  {
    v14 = v13 + a5;
    if ( (v13 + a5 <= a2 || v14 >= v9) && (v13 >= a2 || v14 <= v9) )
      v15 = 0;
  }
  v25 = v15;
  if ( !v12 && !v15 )
    return 0;
  v17 = *(_DWORD *)(this + 244);
  if ( v13 > v17 + v9 || v13 < v9 - v17 )
  {
    v18 = a5 + v13;
    if ( v18 >= a2 - v17 && v18 <= a2 + v17 && v12 )
    {
      *a6 = a2 - a5;
      goto LABEL_28;
    }
  }
  else if ( v12 )
  {
    *a6 = v9;
LABEL_28:
    v22 = 1;
  }
  v19 = *(_DWORD *)(this + 244);
  v20 = *a7;
  if ( *a7 > v19 + v24 || v20 < v24 - v19 )
  {
    v21 = v23 + v20;
    if ( v21 <= v19 + a3 && v21 >= a3 - v19 && v25 )
    {
      *a7 = a3 - v23;
      return 1;
    }
  }
  else if ( v25 )
  {
    *a7 = v24;
    return 1;
  }
  return v22;
}
