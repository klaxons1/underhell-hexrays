unsigned int __usercall sub_104073D0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  unsigned int result; // eax
  _DWORD *v4; // edi
  int *v5; // ecx
  int v6; // ebx
  int (__thiscall *v7)(int, char *, int); // edx
  float *v8; // eax
  double v9; // st6
  double v10; // rtt
  int v11; // eax
  char *v12; // eax
  int v13; // edi
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  int v17; // edi
  int i; // esi
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // edi
  _DWORD *v26; // ecx
  char v28[44]; // [esp+3Ch] [ebp-DCh] BYREF
  float v29; // [esp+68h] [ebp-B0h]
  char v30[12]; // [esp+90h] [ebp-88h] BYREF
  float v31[3]; // [esp+9Ch] [ebp-7Ch] BYREF
  float v32[3]; // [esp+A8h] [ebp-70h] BYREF
  float v33[3]; // [esp+B4h] [ebp-64h] BYREF
  float v34[3]; // [esp+C0h] [ebp-58h] BYREF
  float v35[3]; // [esp+CCh] [ebp-4Ch] BYREF
  int v36; // [esp+D8h] [ebp-40h]
  int v37; // [esp+DCh] [ebp-3Ch] BYREF
  float v38; // [esp+E0h] [ebp-38h]
  float v39; // [esp+E4h] [ebp-34h]
  float v40; // [esp+E8h] [ebp-30h]
  float v41; // [esp+ECh] [ebp-2Ch]
  float v42; // [esp+F0h] [ebp-28h]
  float v43; // [esp+F4h] [ebp-24h]
  float v44; // [esp+F8h] [ebp-20h] BYREF
  float v45; // [esp+FCh] [ebp-1Ch]
  float v46; // [esp+100h] [ebp-18h]
  unsigned int *v47; // [esp+104h] [ebp-14h]
  float v48; // [esp+108h] [ebp-10h] BYREF
  float v49; // [esp+10Ch] [ebp-Ch]
  float v50; // [esp+110h] [ebp-8h]
  float v51; // [esp+114h] [ebp-4h] BYREF
  int savedregs; // [esp+118h] [ebp+0h] BYREF

  result = *(_DWORD *)(a1 + 1412);
  v4 = (_DWORD *)(a1 + 1412);
  v47 = (unsigned int *)(a1 + 1412);
  if ( result == -1 || (v5 = &off_1061BE18[4 * (result & 0xFFF) + 1], result >>= 12, v5[1] != result) || !*v5 )
  {
    if ( *(_DWORD *)(a1 + 1160) != 183 )
    {
      v51 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100D2D00((float *)(a1 + 1132), &v51);
      result = sub_100D1940((_DWORD *)a1);
      v6 = result;
      if ( result )
      {
        result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
        if ( (_BYTE)result )
        {
          sub_100F5A30((_DWORD *)v6, (int)&v44, (int)v33, (int)v32);
          v7 = *(int (__thiscall **)(int, char *, int))(*(_DWORD *)v6 + 968);
          v48 = v32[0] * -3.0;
          v49 = v32[1] * -3.0;
          v50 = -3.0 * v32[2];
          v38 = v33[0] * 6.0;
          v39 = v33[1] * 6.0;
          v40 = 6.0 * v33[2];
          v41 = v44 * 12.0;
          v42 = v45 * 12.0;
          v43 = 12.0 * v46;
          v8 = (float *)v7(v6, v30, a2);
          v9 = v8[1] + v42;
          v10 = v8[2] + v43;
          v34[0] = *v8 + v41 + v38 + v48;
          v34[1] = v9 + v39 + v49;
          v34[2] = v10 + v40 + v50;
          sub_10422540(&v44, v31);
          v11 = sub_100D1940((_DWORD *)a1);
          v12 = sub_10403F00(v34, v31, *(_DWORD *)(v11 + 24));
          if ( v12 )
            *v4 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v12 + 8))(v12);
          else
            *v4 = -1;
          if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
          *(_DWORD *)(v13 + 2104) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 504))(v6, v35);
          v48 = v44 * 128.0 + v35[0];
          v49 = v45 * 128.0 + v35[1];
          v50 = 128.0 * v46 + v35[2];
          sub_1002A5F0((int)&savedregs, a1, v35, &v48, 1174421507, a1, 0, (int)v28);
          if ( 1.0 == v29 )
          {
            v14 = (char *)sub_1026A890(v47);
            sub_10404660(v14, 0.30000001);
          }
          v15 = (char *)sub_100D1940((_DWORD *)a1);
          sub_100CF490(v15, 1, *(_DWORD *)(a1 + 1192));
          *(float *)(v6 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 181);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 1, 0.0);
          sub_101E3110((void *)v6, 5u, 0, 4u);
          ++*(_DWORD *)(a1 + 1372);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v6, 1);
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          v16 = sub_100D1940((_DWORD *)a1);
          sub_1023D4B0(1, (float *)(a1 + 580), 1000, 0.2, v16, 4, 0);
          v17 = dword_106C7638;
          for ( i = 0; i < v17; ++i )
          {
            if ( sub_10257050(v6) )
            {
              v19 = *(_DWORD *)(dword_106C762C + 4 * i);
              if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106C762C + 4 * i) & 0xFFF) + 2] != v19 >> 12 )
                v20 = 0;
              else
                v20 = off_1061BE18[4 * (*(_DWORD *)(dword_106C762C + 4 * i) & 0xFFF) + 1];
              if ( *(char **)(v20 + 92) == "trigger_rpgfire" || sub_100D6240((_DWORD *)v20, "trigger_rpgfire") )
              {
                v21 = *(_DWORD *)(dword_106C762C + 4 * i);
                if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106C762C + 4 * i) & 0xFFF) + 2] != v21 >> 12 )
                  v22 = 0;
                else
                  v22 = off_1061BE18[4 * (*(_DWORD *)(dword_106C762C + 4 * i) & 0xFFF) + 1];
                sub_10254DA0(v22, v6);
              }
            }
          }
          result = dword_10698344;
          if ( *(_DWORD *)(dword_10698344 + 48) )
          {
            v51 = COERCE_FLOAT(sub_1002A680(&dword_10690DF8));
            v23 = sub_1016BFB0(&dword_10690DF8);
            v36 = v23;
            result = (unsigned int)sub_10162BE0(&v37, "npc_strider");
            v24 = 0;
            if ( v23 > 0 )
            {
              v25 = dword_106EADA0;
              do
              {
                v26 = *(_DWORD **)(LODWORD(v51) + 4 * v24);
                result = v26[23];
                if ( result == v37 )
                {
                  if ( *v47 == -1 || off_1061BE18[4 * (*v47 & 0xFFF) + 2] != *v47 >> 12 )
                    result = 0;
                  else
                    result = off_1061BE18[4 * (*v47 & 0xFFF) + 1];
                  if ( v25 > 0 )
                  {
                    result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, unsigned int))(*v26 + 896))(
                               v26,
                               v25,
                               0,
                               result);
                    v25 = dword_106EADA0;
                  }
                }
                ++v24;
              }
              while ( v24 < v36 );
            }
          }
        }
      }
    }
  }
  return result;
}
