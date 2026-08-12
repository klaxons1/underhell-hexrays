void __thiscall sub_10111B20(char *this, float *a2, float *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *v9; // ebx
  float *v10; // edi
  float *v11; // eax
  double v12; // st7
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  float *v16; // eax
  float v17[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v18[3]; // [esp+18h] [ebp-10h] BYREF
  float v19; // [esp+24h] [ebp-4h]

  v4 = *(_DWORD *)(*((_DWORD *)this + 1) + 424);
  if ( !v4 )
    goto LABEL_6;
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 292))(*(_DWORD *)(*((_DWORD *)this + 1) + 424)) )
  {
    v5 = *(_DWORD *)this;
    v19 = *(float *)dword_106BAFF0;
    v6 = (*(int (__thiscall **)(char *))(v5 + 36))(this);
    v7 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 32))(this, v6);
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 292))(v4, v7);
    v9 = a3;
    v10 = a2;
    (*(void (__thiscall **)(int, float *, float *, int))(LODWORD(v19) + 92))(dword_106BAFF0, a2, a3, v8);
    goto LABEL_8;
  }
  if ( 0.0 == ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 168))(v4) )
  {
LABEL_6:
    v16 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
    v10 = a2;
    v9 = a3;
    *a2 = *v16;
    a2[1] = v16[1];
    a2[2] = v16[2];
    *a3 = *a2;
    a3[1] = a2[1];
    v15 = a2[2];
  }
  else
  {
    v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 168))(v4);
    v11 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
    v10 = a2;
    v12 = v19;
    *a2 = *v11 - v19;
    a2[1] = v11[1] - v12;
    a2[2] = v11[2] - v12;
    v13 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
    v9 = a3;
    v14 = v19;
    *a3 = *v13 + v19;
    a3[1] = v13[1] + v14;
    v15 = v14 + v13[2];
  }
  v9[2] = v15;
LABEL_8:
  if ( this[36] < 0 )
  {
    (*(void (__thiscall **)(char *, float *, float *))(*(_DWORD *)this + 12))(this, v18, v17);
    sub_100BCAB0(v18, v10, v10);
    sub_100BCB10(v17, v9, v9);
  }
}
