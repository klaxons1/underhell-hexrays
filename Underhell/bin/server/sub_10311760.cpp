void __thiscall sub_10311760(unsigned int *this, _DWORD *a2)
{
  float *v3; // edi
  float *v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  int v9; // eax
  float *v10; // eax
  int v11; // ebx
  int v12; // edi
  float *v13; // eax
  int v14; // eax
  int v15; // eax
  float *v16; // eax
  int v17; // ebx
  float *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  float *v21; // eax
  _DWORD *v22; // eax
  float *v23; // edi
  _DWORD *v24; // eax
  float *v25; // eax
  int v26; // eax
  unsigned int v27; // edx
  _DWORD *v28; // edi
  _DWORD *v29; // eax
  float *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  bool v34; // zf
  unsigned int v35; // eax
  int v36; // eax
  int v37; // eax
  float *v38; // [esp-Ch] [ebp-C0h]
  float *v39; // [esp-Ch] [ebp-C0h]
  __int64 v40; // [esp+0h] [ebp-B4h]
  float v41; // [esp+8h] [ebp-ACh]
  int v42; // [esp+8h] [ebp-ACh]
  int v43; // [esp+8h] [ebp-ACh]
  float v44; // [esp+8h] [ebp-ACh]
  float v45; // [esp+Ch] [ebp-A8h]
  _DWORD v46[12]; // [esp+18h] [ebp-9Ch] BYREF
  float v47[12]; // [esp+48h] [ebp-6Ch] BYREF
  int v48[3]; // [esp+78h] [ebp-3Ch] BYREF
  int v49[3]; // [esp+84h] [ebp-30h] BYREF
  int v50[3]; // [esp+90h] [ebp-24h] BYREF
  int v51[3]; // [esp+9Ch] [ebp-18h] BYREF
  int v52; // [esp+A8h] [ebp-Ch] BYREF
  float v53; // [esp+ACh] [ebp-8h]
  float v54; // [esp+B0h] [ebp-4h]
  int savedregs; // [esp+B4h] [ebp+0h] BYREF
  int v56; // [esp+BCh] [ebp+8h]
  float v57; // [esp+BCh] [ebp+8h]
  int v58; // [esp+BCh] [ebp+8h]

  switch ( *a2 )
  {
    case 0x96:
      (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this[651] + 48))(this[651]);
      (*(void (__thiscall **)(unsigned int *, int))(*this + 1416))(this, dword_106E3008);
      *((_BYTE *)this + 3672) = 0;
      return;
    case 0x97:
      if ( sub_1012B040(this + 929, 0) || !(*(int (__thiscall **)(unsigned int *))(*this + 368))(this) )
      {
        (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(
          this,
          "Tried to find a path to NULL physics target!\n");
      }
      else
      {
        v7 = *((float *)this + 923);
        v8 = *((float *)this + 924);
        v52 = *((int *)this + 922);
        v53 = v7;
        v54 = v8;
        sub_1001EE90(v47, 4, (float *)&v52, 11, -1.0, 0, dword_1066BCD8);
        if ( (*(unsigned __int8 (__thiscall **)(unsigned int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(
               this[647],
               v47,
               0) )
        {
          if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
          {
            *(float *)v48 = -8.0;
            *(float *)&v48[1] = -8.0;
            *(float *)&v48[2] = -8.0;
            *(float *)v49 = 8.0;
            *(float *)&v49[1] = 8.0;
            *(float *)&v49[2] = 8.0;
            sub_1011C000((float *)&v52, (float *)v49, (float *)v48, 0, 255, 0, 1, 2.0);
            v9 = sub_1026A890(this + 929);
            v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
            sub_1011BC50((float *)&v52, v10, 0, 255, 0, 1, 2.0);
            v11 = (*(int (__thiscall **)(unsigned int *))(*this + 368))(this);
            v12 = sub_1026A890(this + 929);
            v38 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
            v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 576))(v12);
            sub_1011BC50(v13, v38, 0, 255, 0, 1, 2.0);
          }
          v14 = (*(int (__thiscall **)(unsigned int *))(*this + 368))(this);
          sub_1007DF80(v14);
          sub_10027CD0(this, 0);
          *((float *)this + 705) = *(float *)(dword_106B31C8 + 12) + 30.0;
        }
        else
        {
          if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
          {
            *(float *)v51 = -8.0;
            *(float *)&v51[1] = -8.0;
            *(float *)&v51[2] = -8.0;
            *(float *)v50 = 8.0;
            *(float *)&v50[1] = 8.0;
            *(float *)&v50[2] = 8.0;
            sub_1011C000((float *)&v52, (float *)v50, (float *)v51, 255, 0, 0, 1, 2.0);
            v15 = sub_1026A890(this + 929);
            v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 576))(v15);
            sub_1011BC50((float *)&v52, v16, 255, 0, 0, 1, 2.0);
            v17 = (*(int (__thiscall **)(unsigned int *))(*this + 368))(this);
            v58 = sub_1026A890(this + 929);
            v39 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 576))(v17);
            v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v58 + 576))(v58);
            sub_1011BC50(v18, v39, 255, 0, 0, 1, 2.0);
          }
          v19 = sub_1026A890(this + 929);
          sub_103101D0(this, v19);
          this[929] = -1;
          (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(
            this,
            "Unable to navigate to physics attack target!\n");
        }
      }
      return;
    case 0x98:
      if ( sub_1012B040(this + 929, 0) || !(*(int (__thiscall **)(unsigned int *))(*this + 368))(this) )
      {
        (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(
          this,
          "Tried to shove a NULL physics target!\n");
      }
      else
      {
        v56 = sub_1026A890(this + 929);
        v3 = (float *)(*(int (__thiscall **)(unsigned int *))(*this + 576))(this);
        v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v56 + 576))(v56);
        *(float *)&v52 = *v4 - *v3;
        v53 = v4[1] - v3[1];
        v54 = 0.0;
        if ( off_10689714() <= 256.0 )
        {
          v57 = sub_10265030((float *)&v52);
          v41 = sub_100195E0(*((float *)this + 183));
          sub_10019610(v57, v41);
          if ( fabs(v57) <= 55.0 )
          {
            sub_10019C10(this, this[956], v57);
            (*(void (__thiscall **)(unsigned int *, int))(*this + 1416))(this, dword_106E302C);
          }
          else
          {
            v6 = sub_1026A890(this + 929);
            sub_103101D0(this, v6);
            this[929] = -1;
            (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(this, "Shove target off-center\n");
          }
        }
        else
        {
          v5 = sub_1026A890(this + 929);
          sub_103101D0(this, v5);
          this[929] = -1;
          (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(this, "Shove target moved\n");
        }
      }
      return;
    case 0x99:
      sub_1030CE30((int *)this, (int)&savedregs);
      HIDWORD(v40) = this;
      LODWORD(v40) = this;
      sub_1010DD80(this + 940, v40, 0.0);
      sub_10027CD0(this, 0);
      return;
    case 0x9A:
      sub_10039F40((int *)this, this[906]);
      return;
    case 0x9B:
      if ( sub_102DC130(this + 927) )
      {
        (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(
          this,
          "Tried to find a charge position without one specified.\n");
      }
      else
      {
        v42 = dword_1066BCD8;
        v20 = (_DWORD *)sub_1026A890(this + 927);
        v21 = (float *)sub_10019640(v20);
        sub_1001EE90(v47, 4, v21, 11, -1.0, 0, v42);
        if ( (*(unsigned __int8 (__thiscall **)(unsigned int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(
               this[647],
               v47,
               0) )
        {
          v22 = (_DWORD *)sub_1026A890(this + 927);
          v23 = (float *)sub_10019640(v22);
          v24 = (_DWORD *)sub_1026A890(this + 926);
          v25 = (float *)sub_10019640(v24);
          *(float *)&v52 = *v25 - *v23;
          v53 = v25[1] - v23[1];
          v54 = v25[2] - v23[2];
          off_10689714();
          v54 = 0.0;
          sub_1007DF40((int)&v52);
          sub_10027CD0(this, 0);
        }
        else
        {
          this[926] = -1;
          this[927] = -1;
          (*(void (__thiscall **)(unsigned int *, int))(*this + 1312))(this, 11);
        }
      }
      return;
    case 0x9C:
      v26 = (*(int (__thiscall **)(unsigned int *))(*this + 368))(this);
      v27 = *this;
      if ( !v26 )
      {
        (*(void (__thiscall **)(unsigned int *, int))(v27 + 1312))(this, 6);
        return;
      }
      v28 = *(_DWORD **)(this[647] + 32);
      v29 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(v27 + 368))(this);
      v30 = (float *)sub_10019640(v29);
      v31 = sub_10085990(v28, (int)&savedregs, (int)v28, (int)this, (int)this, v30, 0, 0);
      v32 = *(_DWORD *)(this[647] + 32);
      if ( v31 < 0 || v31 >= *(_DWORD *)(v32 + 4) )
      {
        ++dword_10691DE0;
        goto LABEL_39;
      }
      v33 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 4 * v31);
      if ( !v33 )
      {
LABEL_39:
        (*(void (__thiscall **)(unsigned int *, int))(*this + 1312))(this, 11);
        return;
      }
      sub_1008D160(v33, (float *)&v52, this[419]);
      sub_1001EE90(v47, 4, (float *)&v52, 11, -1.0, 0, dword_1066BCD8);
      v34 = (*(unsigned __int8 (__thiscall **)(unsigned int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(
              this[647],
              v47,
              0) == 0;
      v35 = *this;
      if ( v34 )
      {
        (*(void (__thiscall **)(unsigned int *, int))(v35 + 1312))(this, 11);
      }
      else
      {
        v36 = (*(int (__thiscall **)(unsigned int *))(v35 + 368))(this);
        sub_1007DF80(v36);
        sub_10027CD0(this, 0);
      }
      return;
    case 0x9D:
      v43 = dword_1066BCD8;
      *(_BYTE *)(this[647] + 94) = 1;
      sub_10042370(v46, 2, -1, -1.0, 0, v43);
      if ( (*(unsigned __int8 (__thiscall **)(unsigned int, _DWORD *, _DWORD))(*(_DWORD *)this[647] + 20))(
             this[647],
             v46,
             0) )
      {
        sub_10027CD0(this, 0);
      }
      else
      {
        v37 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 368))(this, -1.0);
        sub_1003ABB0((int *)this, v37, v45);
        (*(void (__thiscall **)(unsigned int *, int))(*this + 1312))(this, 11);
      }
      *(_BYTE *)(this[647] + 94) = 0;
      return;
    case 0x9E:
      if ( (int)this[909] >= 2 && RandomFloat(0.0, 1.0) > 0.5 )
      {
        this[938] = 0;
        v44 = (float)(*((_BYTE *)this + 3673) != 0 ? 1200 : 350);
        sub_1030FAF0(this, 0, v44);
        if ( sub_10023D10(this, 73) && !*((_BYTE *)this + 3675) )
          sub_100457E0(this, 91);
      }
      goto LABEL_16;
    case 0x9F:
      if ( *((_BYTE *)this + 3675) && !*((_BYTE *)this + 3673) )
        (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(
          this,
          "Cavern guard is not allowed to use physics attacks.");
      *((float *)this + 914) = 0.0;
      sub_1030FAF0(this, 0, 1200.0);
      if ( sub_1026A890(this + 929) )
LABEL_16:
        sub_10027CD0(this, 0);
      else
        (*(void (__thiscall **)(unsigned int *, const char *))(*this + 1312))(this, "Failed to find a physobject.\n");
      return;
    default:
      sub_10046510((int)this, (int)a2);
      return;
  }
}
