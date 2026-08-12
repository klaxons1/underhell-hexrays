void __thiscall sub_10029130(_DWORD *this, float *a2, float *a3)
{
  bool v4; // zf
  float **v5; // ebx
  float *v6; // esi
  float v7; // edx
  float v8; // eax
  float v9; // eax
  float v10; // ecx
  float v11; // eax
  float v12; // ecx
  float v13; // edx
  float *v14; // esi
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  float v18; // ecx
  float v19; // edx
  float v20; // eax
  double v21; // st7
  _DWORD *v22; // ecx
  int v23; // ebx
  float v24; // [esp+8h] [ebp-10h] BYREF
  float v25; // [esp+Ch] [ebp-Ch]
  float v26; // [esp+10h] [ebp-8h]
  _DWORD *v27; // [esp+14h] [ebp-4h]

  v4 = this[297] == 0;
  v27 = this;
  if ( v4 || *((_BYTE *)this + 80) != 23 )
  {
    if ( !(*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
      goto LABEL_17;
    if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
      sub_10026520((int)(this - 1));
    v5 = (float **)this[484];
    if ( v5 && *v5 && (unsigned __int8)sub_101282A0(this[484]) && this[451] != -1 )
    {
      v6 = *v5;
      v7 = (*v5)[33];
      v8 = (*v5)[34];
      v24 = (*v5)[32];
      v25 = v7;
      v26 = v8;
      if ( sub_10024F50(&flt_10459240, &v24)
        && (v9 = v6[36], v10 = v6[37], v24 = v6[35], v25 = v9, v26 = v10, sub_10024F50(&flt_10459240, &v24)) )
      {
        v11 = v6[26];
        v12 = v6[27];
        v13 = v6[28];
        v14 = a2;
        v24 = v11;
        *a2 = v11;
        v25 = v12;
        v26 = v13;
        a2[1] = v12;
        a2[2] = v26;
        v15 = (*v5)[29];
        v16 = (*v5)[30];
        v17 = (*v5)[31];
      }
      else
      {
        v18 = v6[32];
        v19 = v6[33];
        v20 = v6[34];
        v14 = a2;
        v24 = v18;
        *a2 = v18;
        v25 = v19;
        v26 = v20;
        a2[1] = v19;
        a2[2] = v26;
        v15 = (*v5)[35];
        v16 = (*v5)[36];
        v17 = (*v5)[37];
      }
      v24 = v15;
      v21 = v15;
      v22 = v27;
      *a3 = v21;
      v25 = v16;
      a3[1] = v16;
      v26 = v17;
      a3[2] = v17;
      v23 = sub_10127960(v22[451]);
      sub_100158B0((float *)(v23 + 32), v14, v14);
      sub_10015910((float *)(v23 + 44), a3, a3);
    }
    else
    {
LABEL_17:
      *a2 = flt_10459240;
      a2[1] = flt_10459244;
      a2[2] = flt_10459248;
      *a3 = flt_10459240;
      a3[1] = flt_10459244;
      a3[2] = flt_10459248;
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)this[297] + 12))(this[297], a2, a3);
  }
}
