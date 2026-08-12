int __userpurge sub_10223A90@<eax>(int a1@<ecx>, _BYTE *a2@<ebp>, int a3, int a4, int a5, int a6)
{
  void (__thiscall *v7)(int, _DWORD **); // edx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int result; // eax
  int v14; // ebp
  int v15; // eax
  float v16; // [esp+14h] [ebp-268h]
  int v18; // [esp+2Ch] [ebp-250h] BYREF
  int v19; // [esp+30h] [ebp-24Ch]
  int v20; // [esp+34h] [ebp-248h]
  int v21; // [esp+38h] [ebp-244h]
  _DWORD *v22; // [esp+3Ch] [ebp-240h] BYREF
  float v23[3]; // [esp+40h] [ebp-23Ch] BYREF
  _BYTE v24[176]; // [esp+4Ch] [ebp-230h] BYREF
  int v25; // [esp+FCh] [ebp-180h]
  int v26; // [esp+100h] [ebp-17Ch]
  int v27; // [esp+104h] [ebp-178h]
  int v28; // [esp+108h] [ebp-174h]
  int v29[3]; // [esp+10Ch] [ebp-170h] BYREF
  int v30; // [esp+118h] [ebp-164h]
  int v31; // [esp+11Ch] [ebp-160h]
  int v32; // [esp+120h] [ebp-15Ch]
  int v33; // [esp+124h] [ebp-158h]
  int v34; // [esp+12Ch] [ebp-150h]
  int v35; // [esp+130h] [ebp-14Ch]
  int v36; // [esp+134h] [ebp-148h]
  int v37; // [esp+138h] [ebp-144h]
  int v38; // [esp+188h] [ebp-F4h]
  int v39; // [esp+18Ch] [ebp-F0h]
  int v40; // [esp+1E0h] [ebp-9Ch]
  int v41; // [esp+1E4h] [ebp-98h]
  int v42; // [esp+1E8h] [ebp-94h]
  int v43; // [esp+1ECh] [ebp-90h]
  int v44; // [esp+1F0h] [ebp-8Ch]
  int v45; // [esp+1F4h] [ebp-88h]
  int v46; // [esp+224h] [ebp-58h]
  int v47; // [esp+228h] [ebp-54h]
  int v48; // [esp+22Ch] [ebp-50h]
  float v49; // [esp+230h] [ebp-4Ch] BYREF
  char v50[68]; // [esp+234h] [ebp-48h] BYREF
  int v51; // [esp+278h] [ebp-4h]

  v7 = *(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)a5 + 588);
  v21 = a1;
  v7(a5, &v22);
  v16 = *(float *)(a1 + 84) * 1024.0;
  sub_10220B80(&v49, (float *)a3, 0, v16, 0.0, *(_DWORD *)(a3 + 8));
  v20 = sub_10227A90(a5, 1, &v18, a4 + 8);
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a5 + 516))(a5, a6);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 520))(a5) / 6;
  v11 = v9 / 4;
  if ( v9 / 4 >= v10 )
  {
    v19 = v10;
    v12 = v10;
  }
  else
  {
    v12 = v9 / 4;
    v19 = v11;
  }
  result = v18;
  if ( v18 )
  {
    while ( 1 )
    {
      if ( v12 >= result )
        v12 = result;
      v18 = result - v12;
      v14 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)a5 + 224))(a5, 1, 0, 0, 0, a2);
      v36 = -1;
      v47 = -1;
      v39 = -1;
      v26 = 0;
      LOBYTE(v28) = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v37 = 0;
      v41 = 0;
      v48 = 0;
      v44 = 0;
      v45 = 0;
      v43 = 0;
      v46 = 0;
      sub_10061780((int)v24, v14, 2, 4 * v12, 6 * v12);
      v51 = 0;
      if ( v12 > 0 )
      {
        do
        {
          v21 -= 16;
          sub_102215B0(v22, (int)v24, (int)v50, *(_DWORD *)(v21 + 4), v23, v21);
          --v12;
        }
        while ( v12 );
      }
      if ( (_BYTE)v28 )
      {
        switch ( v27 )
        {
          case 4:
            v15 = 2 * v44 - 2;
            break;
          case 5:
            v15 = 2 * v44;
            break;
          case 6:
            v15 = 3 * v44 - 6;
            break;
          case 7:
            v15 = 6 * v44 / 4;
            break;
          case 8:
            v15 = 0;
            break;
          default:
            v15 = v44;
            break;
        }
        sub_10016B00(v29, v27, v15);
      }
      a2 = v24;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v26 + 80))(v26, v44, v33);
      v30 = 0;
      v31 = 0;
      v42 = 0;
      v40 = 0;
      v38 = -1;
      v25 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 48))(v14, -1, 0);
      if ( v40 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v40 + 8))(v40) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 16))(v40);
      if ( v30 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 16))(v30);
      }
      result = v18;
      if ( !v18 )
        break;
      v12 = v19;
    }
  }
  return result;
}
