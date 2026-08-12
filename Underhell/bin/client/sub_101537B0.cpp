void __usercall sub_101537B0(int a1@<ebx>)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  __int64 v13; // [esp-Ch] [ebp-258h]
  _DWORD *v15[44]; // [esp+8h] [ebp-244h] BYREF
  char v16; // [esp+B8h] [ebp-194h]
  _DWORD *v17; // [esp+BCh] [ebp-190h]
  int v18; // [esp+C0h] [ebp-18Ch]
  char v19; // [esp+C4h] [ebp-188h]
  _DWORD *v20; // [esp+C8h] [ebp-184h] BYREF
  char v21; // [esp+D4h] [ebp-178h]
  _DWORD *v22; // [esp+D8h] [ebp-174h]
  int v23; // [esp+DCh] [ebp-170h]
  int v24; // [esp+E0h] [ebp-16Ch]
  _DWORD *v25; // [esp+E4h] [ebp-168h]
  int v26; // [esp+E8h] [ebp-164h]
  char v27; // [esp+F8h] [ebp-154h]
  _DWORD v28[44]; // [esp+FCh] [ebp-150h] BYREF
  int v29; // [esp+1ACh] [ebp-A0h]
  _BYTE v30[64]; // [esp+1F0h] [ebp-5Ch] BYREF
  int v31; // [esp+230h] [ebp-1Ch]
  int i; // [esp+234h] [ebp-18h]
  unsigned __int64 v33; // [esp+238h] [ebp-14h] BYREF
  unsigned __int64 v34; // [esp+240h] [ebp-Ch] BYREF
  unsigned __int64 *v35; // [esp+248h] [ebp-4h]

  v1 = 0;
  for ( i = 0; v1 < dword_1043CCD8; i = v1 )
  {
    v2 = *(_DWORD *)(dword_1043CCCC + 4 * v1);
    if ( *(_DWORD *)(dword_1043CEF4 + 48) )
    {
      if ( sub_10142330() != 2
        && ((*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 28))(dword_10439968) & 3) == 0 )
      {
        v3 = *(_DWORD *)(v2 + 1232);
        if ( v3 != 2 && v3 != 3 )
        {
          sub_10152470((_DWORD *)v2);
          v35 = &v34;
          v34 = __rdtsc();
          v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
          v5 = v4;
          if ( v4 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
          (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v5 + 120))(v5, 0, v30);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 80))(v5, 0);
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 348))(v5, 1);
          (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 352))(v5, v30);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 36))(v5, *(_DWORD *)(v2 + 1192), 0);
          v6 = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0);
          if ( v6 )
          {
            sub_10016C20((int)v15);
            v7 = *(unsigned __int16 *)(v2 + 1262);
            v17 = v6;
            v19 = 1;
            v18 = 7;
            v8 = *v6;
            v35 = (unsigned __int64 *)(4 * v7);
            v31 = 6 * v7;
            (*(void (__thiscall **)(_DWORD *, int))(v8 + 40))(v6, 2);
            (*(void (__thiscall **)(_DWORD *, unsigned __int64 *, int, _DWORD **))(*v17 + 68))(v17, v35, v31, v15);
            v22 = v6 + 1;
            v23 = v31;
            v24 = 0;
            v27 = 0;
            v26 = 0;
            v20 = v15[41];
            v25 = v15[39];
            v21 = v16;
            sub_10016990((int)v28, (int)v6, (int)v35, v15);
            v26 = 0;
            sub_10016A00(v28);
            v9 = *(unsigned __int16 *)(v2 + 1256);
            if ( v9 != 0xFFFF )
            {
              v10 = *(_DWORD *)(v2 + 1244);
              do
              {
                v11 = 6 * (unsigned __int16)v9;
                sub_10152240(v2, COERCE_FLOAT(v10 + 48 * (unsigned __int16)v9), (int)v15);
                v10 = *(_DWORD *)(v2 + 1244);
                v9 = *(unsigned __int16 *)(v10 + 8 * v11 + 46);
              }
              while ( v9 != 0xFFFF );
            }
            if ( v19 )
            {
              switch ( v18 )
              {
                case 4:
                  v12 = 2 * v29 - 2;
                  break;
                case 5:
                  v12 = 2 * v29;
                  break;
                case 6:
                  v12 = 3 * v29 - 6;
                  break;
                case 7:
                  v12 = 6 * v29 / 4;
                  break;
                case 8:
                  v12 = 0;
                  break;
                default:
                  v12 = v29;
                  break;
              }
              sub_10016B00(&v20, v18, v12);
            }
            (*(void (__thiscall **)(_DWORD *, int, int, _DWORD **))(*v17 + 80))(v17, v29, v24, v15);
            v22 = 0;
            v23 = 0;
            v28[43] = 0;
            v28[41] = 0;
            v28[19] = -1;
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v17 + 48))(v17, -1, 0);
            v17 = 0;
            sub_10016BC0(v15);
          }
          a1 = 0;
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 348))(v5);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 80))(v5, 0);
          (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 96))(v5, v30);
          if ( *(_DWORD *)(dword_1043CF3C + 48) )
          {
            v35 = &v33;
            v33 = __rdtsc();
            v34 = v33 - v34;
            HIDWORD(v13) = g_ClockSpeed[1];
            LODWORD(v13) = g_ClockSpeed[0];
            (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
              dword_1041315C,
              16,
              "Rain render    : %du",
              (unsigned int)((__int64)(1000000 * v34) / v13));
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
          v1 = i;
        }
      }
    }
    ++v1;
  }
}
