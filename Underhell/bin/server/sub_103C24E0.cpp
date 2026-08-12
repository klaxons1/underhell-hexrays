char __usercall sub_103C24E0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char v8; // al
  int v9; // edi
  int v10; // eax
  int v11; // eax
  char v12; // bl
  double v13; // st7
  int v14; // eax
  float *v15; // eax
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  int i; // edi
  int *v20; // eax
  double v21; // st7
  double v22; // st7
  bool v23; // zf
  double v24; // st6
  void (__thiscall *v25)(int, int, int, int); // edx
  int v26; // eax
  float *v27; // eax
  float v29; // [esp+2Ch] [ebp-C8h]
  _BYTE v32[44]; // [esp+38h] [ebp-BCh] BYREF
  float v33; // [esp+64h] [ebp-90h]
  _BYTE v34[12]; // [esp+8Ch] [ebp-68h] BYREF
  float v35; // [esp+98h] [ebp-5Ch] BYREF
  int v36; // [esp+9Ch] [ebp-58h] BYREF
  float v37; // [esp+A0h] [ebp-54h]
  float v38; // [esp+A4h] [ebp-50h]
  float v39; // [esp+A8h] [ebp-4Ch]
  float v40; // [esp+ACh] [ebp-48h]
  int v41; // [esp+B0h] [ebp-44h] BYREF
  float v42; // [esp+B4h] [ebp-40h]
  float v43; // [esp+B8h] [ebp-3Ch]
  int v44; // [esp+BCh] [ebp-38h] BYREF
  float v45; // [esp+C0h] [ebp-34h]
  float v46; // [esp+C4h] [ebp-30h]
  int v47; // [esp+C8h] [ebp-2Ch] BYREF
  float v48; // [esp+CCh] [ebp-28h]
  float v49; // [esp+D0h] [ebp-24h]
  float v50; // [esp+D4h] [ebp-20h]
  char v51; // [esp+DBh] [ebp-19h]
  int v52; // [esp+DCh] [ebp-18h] BYREF
  float v53; // [esp+E0h] [ebp-14h] BYREF
  float v54; // [esp+E4h] [ebp-10h]
  int v55; // [esp+E8h] [ebp-Ch] BYREF
  float v56; // [esp+ECh] [ebp-8h]
  float v57; // [esp+F0h] [ebp-4h]
  int savedregs; // [esp+F4h] [ebp+0h] BYREF

  LOBYTE(v4) = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 2260))(a1, 2);
  if ( !(_BYTE)v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2256))(a1);
    v29 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, v29, 0);
    if ( *(_BYTE *)(a1 + 3733) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 504))(a1, &v47);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v5 + 520))(v5, &v41, &v47, 1);
      *(float *)(a1 + 3824) = *(float *)&v41;
      *(float *)(a1 + 3828) = v42;
      *(float *)(a1 + 3832) = v43;
      v6 = *(_DWORD *)a1;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v8 = (*(int (__thiscall **)(int, int))(v6 + 876))(a1, v7);
      v9 = *(_DWORD *)a1;
      v51 = v8;
      v10 = (*(int (__thiscall **)(int, int, _DWORD))(v9 + 368))(a1, 16449, 0);
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v9 + 548))(a1, v10)
        || (v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
            !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 264))(v11))
        || (*(float *)&v55 = 0.0,
            v56 = 0.0,
            v57 = 52.0,
            v12 = 1,
            sub_100E8D90((_BYTE *)(a1 + 320), (float *)&v55, (float *)&v44),
            sub_1002A5F0((int)&savedregs, a1, (float *)&v44, (float *)&v47, 1174421507, a1, 0, (int)v32),
            1.0 != v33) )
      {
        v12 = 0;
      }
      v38 = *(float *)&v41 - *(float *)&v47;
      v39 = v42 - v48;
      v40 = v43 - v49;
      v50 = off_10689714();
      v13 = 2.0;
      if ( *(_DWORD *)(dword_106EBC9C + 48) )
      {
        *(float *)&v55 = 2.0;
        v56 = 2.0;
        v57 = 2.0;
        *(float *)&v52 = -2.0;
        v53 = -2.0;
        v54 = -2.0;
        sub_1011C000((float *)&v47, (float *)&v52, (float *)&v55, 0, 255, 0, 0, 0.050000001);
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        *(float *)&v55 = 2.0;
        v56 = 2.0;
        v57 = 2.0;
        *(float *)&v52 = -2.0;
        v53 = -2.0;
        v54 = -2.0;
        v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 576))(v14);
        sub_1011C000(v15, (float *)&v52, (float *)&v55, 0, 255, 0, 0, 0.050000001);
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 576))(v16);
        sub_1011BC50((float *)&v47, v17, 0, 255, 0, 0, 0.050000001);
        *(float *)&v55 = 2.0;
        v56 = 2.0;
        v57 = 2.0;
        *(float *)&v52 = -2.0;
        v53 = -2.0;
        v54 = -2.0;
        sub_1011C000((float *)&v47, (float *)&v52, (float *)&v55, 0, 255, 0, 0, 0.050000001);
        *(float *)&v55 = 2.0;
        v56 = 2.0;
        v57 = 2.0;
        *(float *)&v52 = -2.0;
        v53 = -2.0;
        v54 = -2.0;
        sub_1011C000((float *)&v41, (float *)&v52, (float *)&v55, 0, 255, 0, 0, 0.050000001);
        sub_1011BC50((float *)&v47, (float *)&v41, 0, 255, 0, 0, 0.050000001);
        v13 = 2.0;
      }
      if ( v51 )
      {
        if ( v12 && v50 <= 1200.0 )
        {
          if ( *(_DWORD *)(dword_106EBC9C + 48) )
          {
            sub_103BFAD0((_DWORD *)a1);
            sub_10421CE0(a1 + 3676, 0, v34);
            sub_10421CE0(a1 + 3676, 3, &v55);
            for ( i = 0; i < 4; ++i )
            {
              v20 = sub_1001F410((_DWORD *)a1);
              v52 = *v20;
              v53 = *((float *)v20 + 1);
              v54 = *((float *)v20 + 2);
              switch ( i )
              {
                case 0:
                  v21 = *(float *)&v52 - 15.0;
                  goto LABEL_27;
                case 1:
                  v21 = *(float *)&v52 + 15.0;
                  goto LABEL_27;
                case 2:
                  v21 = *(float *)&v52 - 25.0;
                  goto LABEL_27;
                case 3:
                  v21 = *(float *)&v52 + 25.0;
LABEL_27:
                  *(float *)&v52 = v21;
                  break;
                default:
                  break;
              }
              sub_10422220(&v52, &v35);
              *(float *)&v44 = v35 * 256.0 + *(float *)&v55;
              v45 = *(float *)&v36 * 256.0 + v56;
              v46 = 256.0 * v37 + v57;
              sub_1011BC50((float *)&v55, (float *)&v44, 255, 255, 255, 0, 0.1);
            }
          }
          if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 3744) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106EBC70);
          }
          else
          {
            sub_103BFAD0((_DWORD *)a1);
            sub_10421CE0(a1 + 3676, 0, &v55);
            sub_10421CE0(a1 + 3676, 3, &v44);
            v53 = v38;
            v54 = v39;
            v36 = v55;
            v37 = v56;
            v22 = 0.98480773;
            if ( v50 >= 60.0
              || (sub_100196B0(&v53),
                  sub_100196B0((float *)&v36),
                  v22 = 0.70709997,
                  v37 * v54 + *(float *)&v36 * v53 >= 0.9848077530122) )
            {
              v23 = (*(_DWORD *)(a1 + 248) & 0x100) == 0;
              v24 = *(float *)&v55 * v38 + v56 * v39 + v57 * v40;
              v50 = v24;
              if ( v23 )
              {
                if ( v24 >= v22 )
                {
                  v25 = *(void (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 1416);
                  *(_DWORD *)(a1 + 2372) = 0;
                  v25(a1, dword_106EBC68, a3, a2);
                  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 2264))(a1, &v44);
                }
              }
              else
              {
                sub_103BF7A0(a1);
              }
            }
          }
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
          v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 576))(v26);
          *(float *)&v55 = *v27 - *(float *)&v47;
          v56 = v27[1] - v48;
          v57 = v27[2] - v49;
          off_10689714();
          sub_10422540(&v55, &v44);
          *(float *)(a1 + 3788) = v45;
          *(float *)(a1 + 3784) = *(float *)&v44;
          LOBYTE(v4) = sub_103C1260((int *)a1);
        }
        else
        {
          *(float *)(a1 + 3748) = v13 + *(float *)(dword_106B31C8 + 12);
          sub_10021880((void *)a1);
          sub_100285C0((_DWORD *)a1, 0, 1);
          LOBYTE(v4) = sub_100EC3F0((_DWORD *)a1, (int)sub_102B2850, 0.0, 0);
        }
      }
      else
      {
        sub_10021880((void *)a1);
        sub_100285C0((_DWORD *)a1, 0, 1);
        if ( *(char *)(a1 + 248) >= 0 )
          v18 = *(float *)(dword_106B31C8 + 12) + 5.0;
        else
          v18 = *(float *)(dword_106B31C8 + 12) + 2.0;
        *(float *)(a1 + 3748) = v18;
        sub_100EC3F0((_DWORD *)a1, (int)sub_103BFBE0, 0.0, 0);
        v4 = *(_DWORD *)(a1 + 252) >> 11;
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          LOBYTE(v4) = sub_100DAE60(a1);
        *(float *)(a1 + 3784) = *(float *)(a1 + 704);
        *(float *)(a1 + 3788) = *(float *)(a1 + 708);
        *(float *)(a1 + 3792) = *(float *)(a1 + 712);
      }
    }
    else
    {
      sub_100285C0((_DWORD *)a1, 0, 1);
      *(float *)(a1 + 3748) = *(float *)(dword_106B31C8 + 12) + 5.0;
      LOBYTE(v4) = sub_100EC3F0((_DWORD *)a1, (int)sub_103BFBE0, 0.0, 0);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        LOBYTE(v4) = sub_100DAE60(a1);
      *(float *)(a1 + 3784) = *(float *)(a1 + 704);
      *(float *)(a1 + 3788) = *(float *)(a1 + 708);
      *(float *)(a1 + 3792) = *(float *)(a1 + 712);
    }
  }
  return v4;
}
