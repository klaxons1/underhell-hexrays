int __userpurge sub_10224940@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ebp
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // eax
  int v14; // [esp+68h] [ebp-204h]
  int v15; // [esp+6Ch] [ebp-200h]
  int v17; // [esp+74h] [ebp-1F8h]
  _BYTE v18[4]; // [esp+78h] [ebp-1F4h] BYREF
  int v19; // [esp+7Ch] [ebp-1F0h] BYREF
  int v20; // [esp+80h] [ebp-1ECh]
  _BYTE v21[176]; // [esp+88h] [ebp-1E4h] BYREF
  int v22; // [esp+138h] [ebp-134h]
  int v23; // [esp+13Ch] [ebp-130h]
  int v24; // [esp+140h] [ebp-12Ch]
  char v25; // [esp+144h] [ebp-128h]
  _DWORD v26[3]; // [esp+148h] [ebp-124h] BYREF
  int v27; // [esp+154h] [ebp-118h]
  int v28; // [esp+158h] [ebp-114h]
  int v29; // [esp+15Ch] [ebp-110h]
  int v30; // [esp+160h] [ebp-10Ch]
  int v31; // [esp+168h] [ebp-104h]
  int v32; // [esp+16Ch] [ebp-100h]
  int v33; // [esp+170h] [ebp-FCh]
  int v34; // [esp+174h] [ebp-F8h]
  int v35; // [esp+1C4h] [ebp-A8h]
  int v36; // [esp+1C8h] [ebp-A4h]
  int v37; // [esp+21Ch] [ebp-50h]
  int v38; // [esp+220h] [ebp-4Ch]
  int v39; // [esp+224h] [ebp-48h]
  int v40; // [esp+228h] [ebp-44h]
  int v41; // [esp+22Ch] [ebp-40h]
  int v42; // [esp+230h] [ebp-3Ch]
  int v43; // [esp+260h] [ebp-Ch]
  int v44; // [esp+264h] [ebp-8h]
  int v45; // [esp+268h] [ebp-4h]

  v6 = a1;
  v7 = sub_101F7960(*(_DWORD *)(a4 + 64));
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 204))(v7) )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 120))(v6, a4, a5, v7);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 36))(a3, v7, 0);
  v20 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 516))(a3, v7);
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 520))(a3);
  result = *(_DWORD *)(a4 + 40);
  v15 = result;
  v14 = 0;
  if ( result )
  {
    while ( 1 )
    {
      result = (*(int (__thiscall **)(int, int, int, int, int, int, int *, _BYTE *))(*(_DWORD *)v6 + 48))(
                 v6,
                 a4,
                 a5,
                 v14,
                 v20,
                 v17,
                 &v19,
                 v18);
      v10 = result;
      if ( !result )
        break;
      v15 -= result;
      v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)a3 + 224))(a3, 1, 0, 0, 0, a2);
      v33 = -1;
      v44 = -1;
      v36 = -1;
      v23 = 0;
      v25 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v38 = 0;
      v45 = 0;
      v41 = 0;
      v42 = 0;
      v40 = 0;
      v43 = 0;
      sub_10061780((int)v21, v11, 2, v20, v19);
      (*(void (__thiscall **)(int, int, int, int, _BYTE *, _DWORD, int, int))(*(_DWORD *)v17 + 44))(
        v17,
        a5,
        a6,
        a3,
        v21,
        0,
        v15,
        v10);
      if ( v25 )
      {
        v12 = sub_10016D90(v24, v41);
        sub_10016B00(v26, v24, v12);
      }
      a2 = v21;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v23 + 80))(v23, v41, v30);
      v27 = 0;
      v28 = 0;
      v39 = 0;
      v37 = 0;
      v35 = -1;
      v22 = 0;
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 48))(v11, -1, 0);
      v14 += v10;
      if ( v37 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 8))(v37);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 16))(v37);
      }
      if ( v27 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 16))(v27);
      }
      if ( !v15 )
        break;
      v6 = a1;
    }
  }
  return result;
}
