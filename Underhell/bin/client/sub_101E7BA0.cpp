void __thiscall sub_101E7BA0(_DWORD *this, _DWORD **a2, double (__thiscall ***a3)(_DWORD))
{
  _DWORD *v3; // edi
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  int (__thiscall *v9)(_DWORD **); // edx
  const char *v10; // eax
  const char *v11; // eax
  int v12; // eax
  int v13; // edi
  char *v14; // eax
  int v15; // ebp
  int v16; // edi
  int v17; // eax
  float v19; // [esp+30h] [ebp-24h]
  __int16 v20; // [esp+3Ch] [ebp-18h]
  int v21[2]; // [esp+40h] [ebp-14h] BYREF
  int v22; // [esp+48h] [ebp-Ch]
  int v23; // [esp+4Ch] [ebp-8h]
  float v24; // [esp+50h] [ebp-4h]
  float v25; // [esp+58h] [ebp+4h]

  v3 = this;
  sub_101E3860(this);
  ((void (__thiscall *)(_DWORD **, int))(*a2)[1])(a2, 1);
  v5 = (const char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
  if ( !_stricmp(v5, "leftedge") )
    sub_101E60B0((int)a2, (int)(v3 + 5));
  v6 = (const char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
  if ( !_stricmp(v6, "rightedge") )
    sub_101E60B0((int)a2, (int)v3 + 27);
  v7 = (const char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
  if ( _stricmp(v7, "{") )
    ((void (__cdecl *)(_DWORD **, const char *))(*a2)[3])(a2, "expecting {\n");
  ((void (__thiscall *)(_DWORD **, int))(*a2)[1])(a2, 1);
  if ( strlen((const char *)((int (__thiscall *)(_DWORD **))**a2)(a2)) )
  {
    while ( 1 )
    {
      v8 = (const char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
      if ( !_stricmp(v8, "}") )
        break;
      v9 = (int (__thiscall *)(_DWORD **))**a2;
      v21[0] = 0;
      v21[1] = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0.0;
      v10 = (const char *)v9(a2);
      v25 = atof(v10);
      ((void (__thiscall *)(_DWORD **, _DWORD))(*a2)[1])(a2, 0);
      v11 = (const char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
      v19 = atof(v11);
      v12 = sub_101E7400(v21, 0);
      v13 = v21[0] + 10 * v12;
      *(float *)(v13 + 4) = v25;
      *(float *)v13 = v19;
      if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a2)[2])(a2) )
      {
        ((void (__thiscall *)(_DWORD **, _DWORD))(*a2)[1])(a2, 0);
        v14 = (char *)((int (__thiscall *)(_DWORD **))**a2)(a2);
        *(_WORD *)(v13 + 8) = (2 * sub_100D9F40(v14)) | *(_BYTE *)(v13 + 8) & 1;
      }
      v15 = v23;
      if ( v23 >= 1 )
      {
        v16 = v21[0];
        do
        {
          v20 = *(_WORD *)(v16 + 8);
          v17 = sub_101E3EC0(this, *(float *)(v16 + 4), *(float *)v16, 0);
          v16 += 10;
          --v15;
          *(_WORD *)(v17 + 8) = v20 ^ ((unsigned __int8)v20 ^ *(_BYTE *)(v17 + 8)) & 1;
        }
        while ( v15 );
      }
      if ( v22 >= 0 && v21[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
      ((void (__thiscall *)(_DWORD **, int))(*a2)[1])(a2, 1);
      v3 = this;
      if ( !strlen((const char *)((int (__thiscall *)(_DWORD **))**a2)(a2)) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    ((void (__cdecl *)(_DWORD **, const char *))(*a2)[3])(a2, "expecting ramp data\n");
  }
  sub_101E3B90(v3, a3);
}
