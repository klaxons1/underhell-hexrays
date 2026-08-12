void __thiscall sub_103A3400(int *this, int a2)
{
  int v3; // edx
  float *v4; // eax
  float *v5; // eax
  int v6; // ecx
  int v7; // ecx
  float v8; // eax
  int (__thiscall *v9)(int); // edx
  _DWORD *v10; // eax
  unsigned int *v11; // eax
  unsigned int v12; // eax
  int *v13; // ecx
  int v14; // edi
  float *v15; // ebx
  float *v16; // eax
  double v17; // st4
  double v18; // st7
  double v19; // st4
  double v20; // st5
  double v21; // st7
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // eax
  int v25; // edi
  int v26; // eax
  void (__thiscall *v27)(int, int *); // edx
  int v28; // ebx
  int v29; // edi
  double v30; // st7
  int (__thiscall *v31)(int); // edx
  double v32; // st6
  float *v33; // eax
  float v34; // edx
  float *v35; // eax
  double v36; // st7
  double (__thiscall *v37)(int); // eax
  double v38; // st7
  void (__thiscall *v39)(int, float *); // edx
  float v40; // [esp+Ch] [ebp-A4h]
  _BYTE v41[12]; // [esp+18h] [ebp-98h] BYREF
  float v42; // [esp+24h] [ebp-8Ch]
  float v43; // [esp+28h] [ebp-88h]
  float v44; // [esp+2Ch] [ebp-84h]
  float v45; // [esp+44h] [ebp-6Ch]
  float v46[3]; // [esp+6Ch] [ebp-44h] BYREF
  float v47[3]; // [esp+78h] [ebp-38h] BYREF
  float v48[3]; // [esp+84h] [ebp-2Ch] BYREF
  float v49; // [esp+90h] [ebp-20h] BYREF
  float v50; // [esp+94h] [ebp-1Ch]
  float v51; // [esp+98h] [ebp-18h]
  float v52; // [esp+9Ch] [ebp-14h]
  int v53; // [esp+A0h] [ebp-10h] BYREF
  float v54; // [esp+A4h] [ebp-Ch] BYREF
  int v55; // [esp+A8h] [ebp-8h] BYREF
  float v56; // [esp+ACh] [ebp-4h] BYREF
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0x30:
    case 0x31:
      v6 = this[106];
      if ( !v6 )
        goto LABEL_9;
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
      return;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x81:
      goto LABEL_2;
    case 0x7C:
      *((float *)this + 935) = flt_106F1CA8;
      *((float *)this + 936) = flt_106F1CAC;
      *((float *)this + 937) = flt_106F1CB0;
      sub_10027CD0(this, 0);
      return;
    case 0x96:
    case 0x9B:
      v7 = this[106];
      if ( v7 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
        this[944] = *(int *)(dword_106B31C8 + 12);
      }
      else
      {
LABEL_9:
        (*(void (__thiscall **)(int *, const char *))(*this + 1312))(this, "Roller lost internal physics object?");
      }
      return;
    case 0x97:
      if ( sub_10023D10(this, 10) )
LABEL_2:
        sub_10027CD0(this, 0);
      return;
    case 0x98:
      sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 4);
      sub_100E0970((int)this, v3, 8, 0);
      v48[0] = 0.0;
      v48[1] = 0.0;
      v48[2] = 256.0;
      sub_100DD660((int)this, v48);
      sub_103A2F20((int)this);
      v4 = (float *)sub_10019640(this);
      v54 = *v4;
      v55 = *((int *)v4 + 1);
      v56 = v4[2] - 64.0;
      v5 = (float *)sub_10019640(this);
      v49 = *v5;
      v50 = v5[1];
      v51 = v5[2] + 1.0;
      sub_1002A5F0((int)&savedregs, (int)this, &v49, &v54, 16395, (int)this, 0, (int)v41);
      if ( v45 < 1.0 )
      {
        v46[0] = v42;
        v46[1] = v43;
        v46[2] = v44 + 24.0;
        sub_102ABAF0(v46, (float *)this + 182, 0);
      }
      return;
    case 0x99:
      v8 = *(float *)this;
      v52 = 90000.0;
      v9 = *(int (__thiscall **)(int))(LODWORD(v8) + 1868);
      v56 = NAN;
      v10 = (_DWORD *)v9((int)this);
      v11 = sub_10077AB0(v10, (unsigned __int8 *)&v53);
      if ( !v11 )
        goto LABEL_25;
      do
      {
        v12 = *v11;
        if ( v12 != -1 )
        {
          v13 = &off_1061BE18[4 * (v12 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (v12 & 0xFFF) + 2] == v12 >> 12 )
          {
            v14 = *v13;
            if ( *v13 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 264))(*v13) )
              {
                if ( (*(int (__thiscall **)(int *, int))(*this + 1080))(this, v14) == 2 )
                {
                  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 576))(v14);
                  v16 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
                  v17 = *v16 - *v15;
                  v18 = v17 * v17;
                  v19 = v16[1] - v15[1];
                  v20 = v16[2] - v15[2];
                  v21 = v20 * v20 + v19 * v19 + v18;
                  if ( v52 > v21 )
                  {
                    v52 = v21;
                    sub_10019680(&v56, v14);
                  }
                }
              }
            }
          }
        }
        v22 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 1868))(this);
        v11 = (unsigned int *)sub_10077340(v22, (unsigned __int8 *)&v53);
      }
      while ( v11 );
      if ( v56 != NAN
        && (v23 = &off_1061BE18[4 * (LOWORD(v56) & 0xFFF) + 1],
            off_1061BE18[4 * (LOWORD(v56) & 0xFFF) + 2] == LODWORD(v56) >> 12)
        && *v23 )
      {
        if ( off_1061BE18[4 * (LOWORD(v56) & 0xFFF) + 2] == LODWORD(v56) >> 12 )
          v24 = *v23;
        else
          v24 = 0;
        v25 = this[651];
        v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 576))(v24, 0.0);
        sub_10078690(v25, v26, 0.0, v40);
        v27 = *(void (__thiscall **)(int, int *))(*this + 1256);
        v56 = *(float *)(a2 + 4);
        v55 = 14;
        v27((int)this, &v55);
      }
      else
      {
LABEL_25:
        (*(void (__thiscall **)(int *, const char *))(*this + 1312))(this, "Couldn't find nearest feared object.");
      }
      return;
    case 0x9A:
      v28 = this[106];
      if ( !v28 )
        goto LABEL_34;
      v29 = 0;
      break;
    case 0x9C:
      return;
    default:
      sub_10046510((int)this, a2);
      return;
  }
  while ( 1 )
  {
    v30 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
    v53 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
    v31 = *(int (__thiscall **)(int))(*this + 576);
    v54 = v30;
    v32 = (double)v53;
    *(float *)&v55 = v32;
    v56 = 0.0;
    v49 = v30 * 24.0;
    v50 = 24.0 * v32;
    v33 = (float *)v31((int)this);
    v34 = *(float *)this;
    v47[0] = v49 + *v33;
    v47[1] = v33[1] + v50;
    v47[2] = v33[2];
    v35 = (float *)(*(int (__thiscall **)(int *))(LODWORD(v34) + 576))(this);
    sub_1002A5F0((int)&savedregs, (int)this, v35, v47, 1174421507, (int)this, 0, (int)v41);
    if ( 1.0 == v45 )
      break;
    if ( ++v29 >= 4 )
      goto LABEL_34;
  }
  v36 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v28 + 116))(v28) * 75.0;
  v37 = *(double (__thiscall **)(int))(*(_DWORD *)v28 + 116);
  v54 = v54 * v36;
  *(float *)&v55 = *(float *)&v55 * v36;
  v56 = v36 * v56;
  v38 = v37(v28);
  v39 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v28 + 236);
  v56 = v38 * 75.0 + v56;
  v39(v28, &v54);
LABEL_34:
  sub_10027CD0(this, 0);
}
