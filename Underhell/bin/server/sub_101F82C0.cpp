int __thiscall sub_101F82C0(int *this)
{
  int (*v2)(void); // eax
  float *v3; // eax
  int v4; // eax
  int *v5; // ecx
  int *v6; // eax
  int v7; // edi
  int *v8; // eax
  int *v9; // eax
  _DWORD v11[3]; // [esp+Ch] [ebp-60h] BYREF
  float v12; // [esp+18h] [ebp-54h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15; // [esp+24h] [ebp-48h]
  float v16; // [esp+28h] [ebp-44h]
  float v17; // [esp+2Ch] [ebp-40h]
  int v18; // [esp+30h] [ebp-3Ch]
  char v19; // [esp+34h] [ebp-38h]
  int v20; // [esp+38h] [ebp-34h]
  int v21; // [esp+3Ch] [ebp-30h]
  int v22; // [esp+40h] [ebp-2Ch]
  int v23; // [esp+44h] [ebp-28h]
  char v24; // [esp+48h] [ebp-24h]
  _DWORD v25[5]; // [esp+4Ch] [ebp-20h] BYREF
  float v26; // [esp+60h] [ebp-Ch]
  float v27; // [esp+64h] [ebp-8h]
  int v28; // [esp+68h] [ebp-4h]

  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v23 = 0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v11[0] = &CUserCmd::`vftable';
  memset(v25, 0, sizeof(v25));
  v11[1] = 0;
  v11[2] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v27 = *(float *)(dword_106B31C8 + 16);
  v2 = *(int (**)(void))(*this + 508);
  v26 = *(float *)(dword_106B31C8 + 12);
  this[816] = 0;
  v3 = (float *)v2();
  v12 = *v3;
  v13 = v3[1];
  v14 = v3[2];
  v4 = (int)(*(float *)(dword_106B31C8 + 12) / *(float *)(dword_106B31C8 + 28) + 0.5);
  v28 = v4;
  if ( this[1054] != v4 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
      {
        sub_100194B0(v5, 4216);
        v4 = v28;
      }
    }
    this[1054] = v4;
  }
  v6 = sub_10188570();
  (*(void (__thiscall **)(int *, int *))(*v6 + 52))(v6, this);
  v7 = *this;
  v8 = sub_10188570();
  (*(void (__thiscall **)(int *, _DWORD *, int *))(v7 + 1524))(this, v11, v8);
  sub_101F7FB0((int)(this + 1009), (int)v11);
  *(float *)(dword_106B31C8 + 16) = v27;
  *(float *)(dword_106B31C8 + 12) = v26;
  v9 = sub_10188570();
  (*(void (__thiscall **)(int *, _DWORD))(*v9 + 52))(v9, 0);
  v11[0] = &CUserCmd::`vftable';
  return sub_102375F0(v25);
}
