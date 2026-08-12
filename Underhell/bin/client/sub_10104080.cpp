void __thiscall sub_10104080(char *this, float *a2)
{
  float *v3; // eax
  float *v4; // eax
  int v5; // esi
  void (__thiscall **v6)(int, _DWORD); // edx
  int v7; // eax
  int v8; // edx
  double (__thiscall *v9)(char *); // eax
  int v10; // eax
  float *v11; // eax
  float *v12; // eax
  int v13; // ebx
  int v14; // edi
  double v15; // st7
  void (__thiscall *v16)(int, float *, _DWORD); // edx
  double v17; // rt0
  double v18; // rt1
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+14h] [ebp-20h]
  float v22[3]; // [esp+24h] [ebp-10h] BYREF
  void (__thiscall **v23)(int, _DWORD); // [esp+30h] [ebp-4h]

  if ( dword_104363D4 < *(_DWORD *)(dword_1043627C + 48) )
  {
    v3 = (float *)sub_10034900(0x808u);
    if ( v3 )
    {
      v4 = sub_10103D30(v3);
      v5 = (int)v4;
      if ( v4 )
      {
        v6 = (void (__thiscall **)(int, _DWORD))*((_DWORD *)v4 + 490);
        *((_DWORD *)v4 + 496) = *((_DWORD *)this + 496) & 0xFFFFFFF7;
        v7 = *((_DWORD *)this + 490);
        v23 = v6;
        v19 = ((double (__thiscall *)(char *))*(_DWORD *)(v7 + 12))(this + 1960);
        (*v23)(v5 + 1960, LODWORD(v19));
        v8 = *((_DWORD *)this + 490);
        v23 = *(void (__thiscall ***)(int, _DWORD))(v5 + 1960);
        v20 = ((double (__thiscall *)(char *))*(_DWORD *)(v8 + 16))(this + 1960);
        v23[1](v5 + 1960, LODWORD(v20));
        v9 = *(double (__thiscall **)(char *))(*((_DWORD *)this + 490) + 20);
        v23 = *(void (__thiscall ***)(int, _DWORD))(v5 + 1960);
        v21 = v9(this + 1960);
        v23[2](v5 + 1960, LODWORD(v21));
        v10 = sub_10034E90(this);
        sub_10034E80((_DWORD *)v5, v10);
        v11 = (float *)sub_10034A00(this);
        sub_10034A30((float *)v5, v11);
        v12 = (float *)sub_10034AE0(this);
        sub_10034B10((float *)v5, v12);
        sub_10038390((_DWORD *)v5, (int)this);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(v5 + 1960) + 96))(v5 + 1960, 3);
        if ( !sub_101034A0(v5) )
          goto LABEL_10;
        *(_DWORD *)(v5 + 1196) = *((_DWORD *)this + 299);
        v13 = *((_DWORD *)this + 34);
        *(_DWORD *)(v5 + 136) = v13;
        if ( !v13 )
        {
          *(_BYTE *)(v5 + 134) = 0;
          sub_1000FCA0((_DWORD *)v5, 0);
        }
        v14 = *(_DWORD *)(v5 + 184);
        if ( v14 )
        {
          v15 = RandomFloat(-0.025, 0.025);
          v16 = *(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v14 + 208);
          v17 = v15 * a2[1];
          v18 = v15 * a2[2];
          v22[0] = *a2 * v15 + *a2;
          v22[1] = v17 + a2[1];
          v22[2] = v18 + a2[2];
          v16(v14, v22, 0);
        }
        else
        {
LABEL_10:
          (*(void (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 4))(v5 + 8);
        }
      }
    }
  }
  else
  {
    DevMsg("Warning! Client physic props overflow *max %i).\n", *(_DWORD *)(dword_1043627C + 48));
  }
}
