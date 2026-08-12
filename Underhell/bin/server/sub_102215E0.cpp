int __thiscall sub_102215E0(void *this, int a2, int a3, int a4)
{
  char *v6; // esi
  const char *v7; // ecx
  const char *v8; // eax
  const char *v9; // eax
  int *v10; // esi
  int v11; // eax
  float *v12; // eax
  double v13; // st6
  double v14; // st7
  int *v15; // eax
  const char *v17; // eax
  void **v18; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v19[6]; // [esp+10h] [ebp-38h] BYREF
  int v20; // [esp+28h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-1Ch]
  char v22; // [esp+30h] [ebp-18h]
  float v23[3]; // [esp+34h] [ebp-14h] BYREF
  char *v24; // [esp+40h] [ebp-8h]
  void *v25; // [esp+44h] [ebp-4h]
  const char *v26; // [esp+54h] [ebp+Ch]
  int v27; // [esp+58h] [ebp+10h]

  v25 = this;
  if ( a2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v18 = &CRestore::`vftable';
  memset(v19, 0, 20);
  v19[5] = a3;
  if ( a3 )
    v20 = a3 + 24;
  else
    v20 = 0;
  v21 = 0;
  v22 = 1;
  sub_10227650(32);
  v6 = *(char **)(a4 + 36);
  v7 = *(const char **)(a4 + 32);
  v24 = v6;
  v26 = v7;
  v8 = v6;
  if ( !v6 )
    v8 = String;
  v27 = sub_101679A0((int)v8);
  v9 = (const char *)sub_10167A60(v27);
  if ( (const char *)(a3 + 1348) == v9 || !_stricmp((const char *)(a3 + 1348), v9) )
  {
    v10 = sub_1021FD40(v26, v6);
    if ( v10 )
    {
      v21 = 1;
      v11 = (*(int (__thiscall **)(int *))(*v10 + 24))(v10);
      v12 = sub_1021E110(v23, v11);
      v13 = *(float *)(a4 + 44) - v12[1];
      v14 = *(float *)(a4 + 48) - v12[2];
      *(float *)(a3 + 1384) = *(float *)(a4 + 40) - *v12;
      *(float *)(a3 + 1388) = v13;
      *(float *)(a3 + 1392) = v14;
      sub_1025FAC0(a2);
      *(_DWORD *)(a4 + 16) = *(_DWORD *)(*(int (__thiscall **)(int *))(*v10 + 8))(v10);
      (*(void (__thiscall **)(int *))(*v10 + 592))(v10);
      sub_10167950(v27, *(char **)(dword_106B31C8 + 60));
      if ( sub_102208D0(v10, (int)&v18) )
        v15 = v10;
      else
        v15 = 0;
      *(float *)(a3 + 1384) = 0.0;
      *(float *)(a3 + 1388) = 0.0;
      *(float *)(a3 + 1392) = 0.0;
      if ( v15 )
      {
        sub_102375F0(v19);
        return 1;
      }
    }
    else
    {
      v17 = v24;
      if ( !v24 )
        v17 = String;
      DevMsg("Warning: No match for global entity %s found in destination level\n", v17);
    }
  }
  sub_102375F0(v19);
  return 0;
}
