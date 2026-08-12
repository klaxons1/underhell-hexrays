int __cdecl sub_101428E0(_DWORD *a1)
{
  int v1; // ecx
  float v3; // [esp+Ch] [ebp-8h]
  int v4; // [esp+10h] [ebp-4h] BYREF

  v4 = v1;
  if ( *a1 == 2 )
  {
    v3 = atof((const char *)a1[259]);
    return (*(int (__thiscall **)(int, float, int))(*(_DWORD *)dword_10439968 + 64))(
             dword_10439968,
             COERCE_FLOAT(LODWORD(v3)),
             v4);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD **, int *))(*(_DWORD *)dword_10439968 + 72))(dword_10439968, &a1, &v4);
    return Warning("r_cheapwaterstart: %f\n", *(float *)&a1);
  }
}
