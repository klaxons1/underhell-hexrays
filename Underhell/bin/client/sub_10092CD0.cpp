int __cdecl sub_10092CD0(float *a1, int a2, float a3, int a4, int a5)
{
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // edx
  float *v11; // eax
  float v12; // eax
  double v13; // st7
  int v14; // ebx
  double v15; // st7
  int result; // eax
  float v17; // [esp+18h] [ebp-40h]
  float v18[3]; // [esp+28h] [ebp-30h] BYREF
  float v19; // [esp+34h] [ebp-24h]
  float v20; // [esp+38h] [ebp-20h]
  float v21; // [esp+3Ch] [ebp-1Ch]
  float v22; // [esp+40h] [ebp-18h]
  float v23; // [esp+44h] [ebp-14h]
  float v24; // [esp+48h] [ebp-10h]
  float v25; // [esp+4Ch] [ebp-Ch] BYREF
  float v26; // [esp+50h] [ebp-8h]
  float v27; // [esp+54h] [ebp-4h]
  float v28; // [esp+60h] [ebp+8h]

  sub_10025400((int)a1);
  v6 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 36))(a1);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v20 = v8;
  v10 = *(_DWORD *)a1;
  v19 = v7;
  v21 = v9;
  (*(void (__thiscall **)(float *, _DWORD))(v10 + 380))(a1, LODWORD(a3));
  if ( a4 == -1 )
  {
    (*(void (__thiscall **)(_DWORD *, int, int, int, _DWORD))(*((_DWORD *)a1 + 1) + 64))(
      (_DWORD *)a1 + 1,
      a2,
      128,
      524032,
      LODWORD(a3));
    sub_10025400((int)a1);
    return (*(int (__thiscall **)(_DWORD *, _DWORD, int, int, _DWORD))(*((_DWORD *)a1 + 1) + 64))(
             (_DWORD *)a1 + 1,
             0,
             -1,
             524032,
             LODWORD(a3));
  }
  else
  {
    v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 36))(a1);
    v25 = *v11;
    v26 = v11[1];
    v12 = v11[2];
    v22 = v25 - v19;
    v27 = v12;
    v23 = v26 - v20;
    v24 = v12 - v21;
    v13 = off_103EDFEC();
    v14 = *((_DWORD *)a1 + 452);
    v15 = v13 * v13 * *((float *)off_103DC81C + 4);
    v18[0] = v22 * v15 + v25;
    v18[1] = v15 * v23 + v26;
    v18[2] = v15 * v24 + v27;
    v28 = a1[454];
    sub_1000DEF0(a1, 8);
    sub_10029860((int)a1, a4);
    v17 = (double)a5 * 0.16666667;
    sub_10025680(a1, v17);
    sub_10037BA0((int)a1, v18);
    (*(void (__thiscall **)(_DWORD *, int, int, int, _DWORD))(*((_DWORD *)a1 + 1) + 64))(
      (_DWORD *)a1 + 1,
      a2,
      128,
      524032,
      LODWORD(a3));
    sub_10037BA0((int)a1, &v25);
    sub_10025400((int)a1);
    sub_10029860((int)a1, v14);
    sub_10025680(a1, v28);
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 380))(a1, *((float *)off_103DC81C + 3));
    result = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int, _DWORD))(*((_DWORD *)a1 + 1) + 64))(
               (_DWORD *)a1 + 1,
               0,
               -1,
               524032,
               *((float *)off_103DC81C + 3));
    *((_DWORD *)a1 + 28) &= ~8u;
  }
  return result;
}
