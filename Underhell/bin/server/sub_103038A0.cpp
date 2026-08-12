void __thiscall sub_103038A0(int *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edi
  float *v7; // eax
  int v8; // edi
  int v9; // eax
  float *v10; // eax
  void (__thiscall *v11)(int *, int); // edx
  float *v12; // eax
  float *v13; // eax
  char v14; // al
  int *v15; // ecx
  float *v16; // eax
  char v17; // al
  int v18; // eax
  char v19; // al
  _BYTE *v20; // ebx
  void (__thiscall *v21)(_BYTE *, int); // eax
  float *v22; // [esp+0h] [ebp-12Ch]
  float *v23; // [esp+4h] [ebp-128h]
  __int64 v24; // [esp+8h] [ebp-124h]
  float v25; // [esp+8h] [ebp-124h]
  float v26; // [esp+8h] [ebp-124h]
  float v27; // [esp+Ch] [ebp-120h]
  float v28; // [esp+Ch] [ebp-120h]
  float v29; // [esp+10h] [ebp-11Ch]
  int v30; // [esp+14h] [ebp-118h]
  _BYTE v31[80]; // [esp+20h] [ebp-10Ch] BYREF
  _BYTE v32[36]; // [esp+70h] [ebp-BCh] BYREF
  float v33[12]; // [esp+94h] [ebp-98h] BYREF
  float v34[3]; // [esp+C4h] [ebp-68h] BYREF
  float v35[12]; // [esp+D0h] [ebp-5Ch] BYREF
  float v36[3]; // [esp+100h] [ebp-2Ch] BYREF
  float v37[3]; // [esp+10Ch] [ebp-20h] BYREF
  _DWORD v38[2]; // [esp+118h] [ebp-14h] BYREF
  int v39[3]; // [esp+120h] [ebp-Ch] BYREF
  int savedregs; // [esp+12Ch] [ebp+0h] BYREF

  v2 = a2;
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      sub_1023C380(this, (int)"NPC_Antlion.MeleeAttackSingle", 0.0, 0);
      goto LABEL_26;
    case 0x97:
      v25 = *(float *)(a2 + 4);
      v13 = (float *)sub_10019640(this);
      v14 = sub_102FE5C0(this, v13, v25, 0, 1);
      v15 = this;
      if ( v14 )
        goto LABEL_34;
      (*(void (__thiscall **)(int *, const char *))(*this + 1312))(
        this,
        "TASK_ANTLION_FIND_BURROW_IN_POINT: Unable to find burrow in position\n");
      return;
    case 0x98:
      v26 = *(float *)(a2 + 4);
      v16 = (float *)sub_10019640(this);
      v17 = sub_102FE5C0(this, v16, v26, 1, 1);
      v15 = this;
      if ( v17 )
        goto LABEL_34;
      (*(void (__thiscall **)(int *, const char *))(*this + 1312))(
        this,
        "TASK_ANTLION_FIND_BURROW_OUT_POINT: Unable to find burrow out position\n");
      return;
    case 0x99:
      sub_10301CC0((int)this);
      sub_10027CD0(this, 0);
      return;
    case 0x9A:
      sub_10301D30((int)this);
      sub_10027CD0(this, 0);
      return;
    case 0x9B:
      sub_100EAB80(this, 32);
      sub_100EA940(this, 0x8000);
      a2 = 2;
      sub_100332A0(this + 62, &a2);
      if ( 0.0 != *(float *)(v2 + 4) )
      {
        v18 = sub_10019B00(this);
        if ( v18 )
        {
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v18 + 224))(v18, this);
          (*(void (__thiscall **)(int *, _DWORD))(*this + 76))(this, 0);
        }
        sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
        v28 = *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC4A0(this, v28, 0);
      }
      goto LABEL_26;
    case 0x9C:
      if ( 1.0 == *(float *)(a2 + 4) )
        *((float *)this + 916) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                   dword_106B31E4,
                                   1.0,
                                   6.0)
                               + *(float *)(dword_106B31C8 + 12);
      return;
    case 0x9D:
      this[920] = 0;
      v12 = (float *)sub_10019640(this);
      if ( sub_102FBCF0(this, (int)&savedregs, v2, (int)this, v12) )
      {
        a2 = -3;
        sub_100332F0(this + 62, &a2);
        sub_10023400((unsigned __int16 *)this, 4);
        sub_10027CD0(this, 0);
      }
      return;
    case 0x9E:
      if ( sub_10300C10((int)this) )
        goto LABEL_26;
      return;
    case 0x9F:
      *((float *)this + 915) = *(float *)(dword_106B31C8 + 12) + 1.0;
      return;
    case 0xA0:
      v19 = sub_102FD740((int)this, 256);
      goto LABEL_33;
    case 0xA1:
      if ( !*((_BYTE *)this + 4092) )
        goto LABEL_14;
      if ( sub_102FF820((int)this, (float *)this + 1020, (float *)v39) )
      {
        sub_10042450(v35, (float *)v39, dword_106E2974, 200.0, 0, dword_1066A988);
        if ( (*(unsigned __int8 (__thiscall **)(int, float *, int))(*(_DWORD *)this[647] + 20))(this[647], v35, 4) )
        {
LABEL_21:
          sub_102FDC20(this);
          sub_10027CD0(this, 0);
          return;
        }
        sub_1001EE90(v33, 5, (float *)v39, dword_106E2974, 200.0, 0, dword_1066A988);
        if ( (*(unsigned __int8 (__thiscall **)(int, float *, int))(*(_DWORD *)this[647] + 20))(this[647], v33, 1) )
        {
          sub_10023E00((char *)this, 35);
          goto LABEL_21;
        }
        (*(void (__thiscall **)(int *, const char *))(*this + 1312))(
          this,
          "Antlion failed to find path to bugbait position\n");
      }
      else
      {
        (*(void (__thiscall **)(int *, const char *))(*this + 1312))(
          this,
          "Antlion failed to find path to bugbait position\n");
      }
      return;
    case 0xA2:
      if ( *((_BYTE *)this + 4092) )
      {
        sub_10078720(this[651], (int)(this + 1020), -1.0);
        (*(void (__thiscall **)(int *))(*this + 2076))(this);
      }
      else
      {
LABEL_14:
        (*(void (__thiscall **)(int *, const char *))(*this + 1312))(this, "No remembered bug bait sound to run to!");
      }
      return;
    case 0xA3:
      v6 = sub_101C5260(this);
      if ( v6 )
      {
        v38[0] = &CTraceFilterAntlion::`vftable';
        v38[1] = this;
        sub_1001F490(this);
        v23 = (float *)sub_1001F470(this);
        v22 = (float *)sub_10019640(this);
        v7 = (float *)sub_10019640(this);
        sub_10023240(COERCE_FLOAT(&savedregs), (int)this, v7, v22, v23, (float *)0x200400B, (int)v38, (int)v32, v30);
        if ( LODWORD(v33[10]) )
        {
          v8 = *this;
          a2 = this[55] + 1;
          v27 = (float)a2;
          *((_BYTE *)this + 4124) = 1;
          v9 = sub_10248110((int)v31, (int)this, (int)this, v27, 0, 0);
          (*(void (__thiscall **)(int *, int))(v8 + 256))(this, v9);
        }
        else
        {
          (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 528))(v6, v39, 0);
          sub_101C73D0((unsigned int *)this, 0);
          v10 = (float *)sub_10019640(this);
          v36[0] = *v10;
          v36[1] = v10[1];
          v36[2] = v10[2] + 1.0;
          sub_1025F370(this, v36, 0);
          v37[0] = *(float *)v39 * -200.0;
          v37[1] = *(float *)&v39[1] * -200.0;
          v37[2] = -200.0 * *(float *)&v39[2] + 100.0;
          sub_100DD660((int)this, v37);
          v11 = *(void (__thiscall **)(int *, int))(*this + 1416);
          this[593] = 0;
          v11(this, dword_106E2970);
        }
      }
      else
      {
LABEL_26:
        sub_10027CD0(this, 0);
      }
      return;
    case 0xA4:
      HIDWORD(v24) = this;
      LODWORD(v24) = this;
      sub_1010DD80(this + 998, v24, 0.0);
      sub_10027CD0(this, 0);
      return;
    case 0xA5:
      v19 = sub_102FD740((int)this, 1024);
LABEL_33:
      v15 = this;
      if ( v19 )
LABEL_34:
        sub_10027CD0(v15, 0);
      else
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 22);
      return;
    case 0xA6:
      return;
    case 0xA7:
      *((float *)this + 138) = 0.0;
      sub_100DD660((int)this, &flt_106F1CA8);
      *((float *)this + 1030) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.0,
                                  0.5)
                              + *(float *)(dword_106B31C8 + 12);
      *((float *)this + 1029) = *(float *)(dword_106B31C8 + 12) + 4.0;
      return;
    case 0xA9:
      v4 = (_DWORD *)this[704];
      v29 = ((double (__thiscall *)(int *, int *))*(_DWORD *)(*this + 1948))(this, v39);
      v5 = (*(int (__thiscall **)(int *))(*this + 504))(this);
      if ( sub_100B3FD0(v4, (float *)this + 716, v5, COERCE_FLOAT(v34), 0.0, (float *)LODWORD(v29)) )
      {
        sub_10042450(v35, (float *)v39, 11, -2.0, 0, dword_1066A988);
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], v35, 0);
        *((float *)this + 640) = *(float *)(dword_106B31C8 + 12) + *(float *)(v2 + 4);
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 8);
      }
      return;
    default:
      v20 = (_BYTE *)this[906];
      if ( !v20
        || (v21 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v20 + 108), v20[8] = 1, v21(v20, v2), !v20[8]) )
      {
        sub_10046510((int)this, v2);
      }
      return;
  }
}
