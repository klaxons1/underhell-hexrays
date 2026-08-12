void __thiscall sub_1033DAB0(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  float *v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  float *v10; // eax
  double v11; // st5
  double v12; // st3
  double v13; // st6
  double v14; // st3
  float *v15; // eax

  if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1748))(this);
  }
  else
  {
    v3 = sub_10021B60((_DWORD *)this);
    sub_10039F40((int *)this, v3);
  }
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( v4 )
  {
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v7 = *v6 - *v5;
    v8 = v6[1] - v5[1];
    v9 = v6[2] - v5[2];
    if ( *(float *)(a2 + 4) * *(float *)(a2 + 4) < v7 * v7 + v8 * v8 + v9 * v9 || *(_BYTE *)(this + 4188) )
    {
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
      v11 = *(float *)(this + 2872) - v10[2];
      v12 = *(float *)(this + 2868) - v10[1];
      v13 = v12 * v12;
      v14 = *(float *)(this + 2864) - *v10;
      if ( *(float *)(a2 + 4) * *(float *)(a2 + 4) <= v14 * v14 + v13 + v11 * v11 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 1768))(this, v4)
          && sub_100846A0(*(_DWORD *)(this + 2588), 1, 0) )
        {
          v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
          *(float *)(this + 2864) = *v15;
          *(float *)(this + 2868) = v15[1];
          *(float *)(this + 2872) = v15[2];
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
        }
      }
    }
    else
    {
      sub_10082A70(*(float **)(this + 2588), 1u);
      sub_10027CD0((_DWORD *)this, 0);
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
  }
}
