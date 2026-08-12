int __userpurge sub_103E0410@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int *a5, float a6)
{
  int v7; // ebx
  int v8; // ebx
  int v9; // ecx
  double v10; // st7
  int v11; // ebx
  float v13; // [esp+Ch] [ebp-24h]
  float v14; // [esp+1Ch] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-14h]
  float v17; // [esp+28h] [ebp-8h]
  float v18; // [esp+28h] [ebp-8h]
  float v19; // [esp+28h] [ebp-8h]
  float v21; // [esp+2Ch] [ebp-4h]

  if ( a6 < 0.8 )
  {
    *(_BYTE *)(a1 + 1868) = 0;
    v11 = *a5;
    v13 = fabs(*(float *)(a1 + 1652));
    v15 = sub_10134630(v13, 0.0, 1.0, 0.0, 0.81999999);
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, int, int, int))(v11 + 48))(
      a5,
      *(_DWORD *)(a1 + 1836),
      LODWORD(v15),
      0.25,
      a3,
      a4,
      a2);
    v10 = 0.0;
    v9 = *(_DWORD *)(a1 + 1840);
    v21 = 0.0;
    goto LABEL_5;
  }
  v7 = *a5;
  v14 = sub_10134630(a6, 0.80000001, 1.0, 0.81999999, 0.0);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, int, int, int))(v7 + 48))(
    a5,
    *(_DWORD *)(a1 + 1836),
    LODWORD(v14),
    1.0,
    a3,
    a4,
    a2);
  v8 = *a5;
  v17 = sub_10134630(a6, 0.80000001, 1.0, 0.0, 0.81999999);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(v8 + 48))(a5, *(_DWORD *)(a1 + 1840), LODWORD(v17), 1.0);
  if ( !*(_BYTE *)(a1 + 1868) )
  {
    v9 = *(_DWORD *)(a1 + 1836);
    v21 = 2.0;
    *(_BYTE *)(a1 + 1868) = 1;
    v10 = 0.22;
LABEL_5:
    v18 = v10;
    (*(void (__thiscall **)(int *, int, _DWORD, float))(*a5 + 48))(a5, v9, LODWORD(v18), COERCE_FLOAT(LODWORD(v21)));
  }
  v19 = (fabs(*(float *)(a1 + 1652)) + 0.2) * 100.0;
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a5 + 44))(
           a5,
           *(_DWORD *)(a1 + 1836),
           LODWORD(v19),
           0.25);
}
