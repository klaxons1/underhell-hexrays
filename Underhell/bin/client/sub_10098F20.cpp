void __userpurge sub_10098F20(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        unsigned int *a3,
        unsigned int *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // ebx
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // esi
  int v25; // eax
  int v26; // edi
  _DWORD v27[41]; // [esp+8h] [ebp-220h] BYREF
  int v28; // [esp+ACh] [ebp-17Ch]
  char v29; // [esp+B8h] [ebp-170h]
  int v30; // [esp+BCh] [ebp-16Ch]
  int v31; // [esp+C0h] [ebp-168h]
  char v32; // [esp+C4h] [ebp-164h]
  _DWORD v33[3]; // [esp+C8h] [ebp-160h] BYREF
  char v34; // [esp+D4h] [ebp-154h]
  int v35; // [esp+D8h] [ebp-150h]
  int v36; // [esp+DCh] [ebp-14Ch]
  int v37; // [esp+E0h] [ebp-148h]
  int v38; // [esp+E4h] [ebp-144h]
  int v39; // [esp+E8h] [ebp-140h]
  char v40; // [esp+F8h] [ebp-130h]
  _DWORD v41[41]; // [esp+FCh] [ebp-12Ch] BYREF
  int v42; // [esp+1A0h] [ebp-88h]
  char v43; // [esp+1A4h] [ebp-84h]
  int v44; // [esp+1A8h] [ebp-80h]
  int v45; // [esp+1ACh] [ebp-7Ch]
  int v46; // [esp+1E0h] [ebp-48h]
  int v47; // [esp+1E4h] [ebp-44h]
  int v48; // [esp+1E8h] [ebp-40h]
  char v49[4]; // [esp+1F0h] [ebp-38h] BYREF
  char v50[4]; // [esp+1F4h] [ebp-34h] BYREF
  int v51; // [esp+1F8h] [ebp-30h]
  int v52; // [esp+1FCh] [ebp-2Ch] BYREF
  int v53; // [esp+200h] [ebp-28h]
  int v54; // [esp+204h] [ebp-24h]
  int v55; // [esp+208h] [ebp-20h] BYREF
  int v56; // [esp+20Ch] [ebp-1Ch]
  char *v57; // [esp+210h] [ebp-18h]
  _DWORD *v58; // [esp+214h] [ebp-14h]
  int j; // [esp+218h] [ebp-10h]
  int v60; // [esp+21Ch] [ebp-Ch]
  int v61; // [esp+220h] [ebp-8h]
  int i; // [esp+224h] [ebp-4h]
  int v63; // [esp+238h] [ebp+10h]
  int v64; // [esp+238h] [ebp+10h]
  int v65; // [esp+23Ch] [ebp+14h]

  v8 = a1;
  v58 = a1;
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::RenderTranslucentDetailObjects",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  if ( a7 )
  {
    sub_10098860(v8, (int)v8, a3, a4, a5, a6, a7, a8);
    v61 = sub_10095110(a7, a8);
    if ( v61 )
    {
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
      v10 = v9;
      v54 = v9;
      if ( v9 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 80))(v10, 10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 84))(v10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 124))(v10);
      v11 = v8[28];
      if ( (unsigned __int8)sub_100EC2E0() || *(_DWORD *)(dword_1043C114 + 48) == 2 )
        v11 = v8[29];
      sub_10016C20((int)v27);
      v12 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v10 + 224))(v10, 1, 0, 0, v11);
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *))(*(_DWORD *)v10 + 512))(v10, v12, 0, &v55, &v52);
      v13 = v52 / 6;
      v60 = v52 / 6;
      if ( v52 / 6 > v55 / 4 )
      {
        v60 = v55 / 4;
        v13 = v55 / 4;
      }
      v14 = v61;
      v65 = v61;
      if ( v61 > v13 )
      {
        v65 = v13;
        v14 = v13;
      }
      v30 = v12;
      v32 = 1;
      v31 = 7;
      v63 = 4 * v14;
      v15 = 6 * v14;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v30 + 68))(v30, v63, v15, v27);
      v35 = v12 + 4;
      v33[0] = v28;
      v37 = 0;
      v40 = 0;
      v38 = v27[39];
      v39 = 0;
      v34 = v29;
      v36 = v15;
      sub_10016990((int)v41, v12, v63, v27);
      v39 = 0;
      sub_10016A00(v41);
      v64 = 0;
      for ( i = 0; i < a7; ++i )
      {
        v16 = *(unsigned __int16 *)(a8 + 2 * i);
        (*(void (__stdcall **)(int, char *, char *))(*(_DWORD *)off_103DCDDC + 36))(v16, v49, v50);
        v57 = (char *)v8[34];
        v17 = sub_100982D0(v8, v16, (float *)a3, (int)a4, v57);
        v18 = 0;
        v56 = v17;
        for ( j = 0; v18 < v56; j = v18 )
        {
          v19 = v8[7] + 44 * *(_DWORD *)&v57[8 * v18];
          v20 = dword_103DDC20[(*(unsigned __int8 *)(v19 + 36) >> 2) & 3];
          v53 = v19;
          v51 = v20;
          if ( v20 + v64 > v65 )
          {
            if ( v32 )
            {
              switch ( v31 )
              {
                case 4:
                  v21 = 2 * v45 - 2;
                  break;
                case 5:
                  v21 = 2 * v45;
                  break;
                case 6:
                  v21 = 3 * v45 - 6;
                  break;
                case 7:
                  v21 = 6 * v45 / 4;
                  break;
                case 8:
                  v21 = 0;
                  break;
                default:
                  v21 = v45;
                  break;
              }
              sub_10016B00(v33, v31, v21);
            }
            (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v30 + 80))(v30, v45, v37, v27);
            v35 = 0;
            v36 = 0;
            v44 = 0;
            v42 = 0;
            v30 = 0;
            v41[19] = -1;
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 48))(v12, -1, 0);
            v22 = v61 - v64;
            v61 = v22;
            v65 = v22;
            if ( v22 > v60 )
            {
              v65 = v60;
              v22 = v60;
            }
            v30 = v12;
            v32 = 1;
            v31 = 7;
            v23 = 4 * v22;
            v24 = 6 * v22;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 2);
            (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v30 + 68))(v30, v23, v24, v27);
            v35 = v12 + 4;
            v38 = v27[39];
            v36 = v24;
            v33[0] = v28;
            v37 = 0;
            v40 = 0;
            v34 = v29;
            v42 = v12;
            qmemcpy(v41, v27, sizeof(v41));
            v44 = 4 * v65;
            v41[20] = v27[20] != 0 ? 2 : 0;
            v45 = 0;
            v43 = 0;
            if ( v47 == -1 )
            {
              v46 = 0;
              v47 = v27[40];
              v48 = v27[39];
            }
            v39 = 0;
            sub_10016A00(v41);
            v19 = v53;
            v20 = v51;
            v64 = 0;
            v18 = j;
          }
          if ( ((*(unsigned __int8 *)(v19 + 36) >> 2) & 3) == 1 )
            sub_10095470(v19, (int)v27);
          v64 += v20;
          v8 = v58;
          ++v18;
        }
      }
      if ( v32 )
      {
        switch ( v31 )
        {
          case 4:
            v25 = 2 * v45 - 2;
            break;
          case 5:
            v25 = 2 * v45;
            break;
          case 6:
            v25 = 3 * v45 - 6;
            break;
          case 7:
            v25 = 6 * v45 / 4;
            break;
          case 8:
            v25 = 0;
            break;
          default:
            v25 = v45;
            break;
        }
        sub_10016B00(v33, v31, v25);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 80))(v30, v45, v37);
      v35 = 0;
      v36 = 0;
      v44 = 0;
      v42 = 0;
      v41[19] = -1;
      v30 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 48))(v12, -1, 0);
      v26 = v54;
      (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 88))(v54);
      if ( v42 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v42 + 8))(v42) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 16))(v42);
      if ( v35 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v35 + 8))(v35) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 16))(v35);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 12))(v26);
      (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 4))(v26);
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
