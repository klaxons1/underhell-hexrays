int __thiscall sub_1026D160(void *this, char a2, char a3)
{
  int result; // eax
  float *v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11[3]; // [esp+18h] [ebp-30h] BYREF
  int v12[3]; // [esp+24h] [ebp-24h] BYREF
  int v13[3]; // [esp+30h] [ebp-18h] BYREF
  int v14; // [esp+3Ch] [ebp-Ch] BYREF
  float v15; // [esp+40h] [ebp-8h]
  float v16; // [esp+44h] [ebp-4h]

  if ( !*((_BYTE *)this + 104) )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 244))(this);
    *((_BYTE *)this + 104) = 1;
  }
  result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 11) + 208))(*((_DWORD *)this + 11));
  v5 = (float *)result;
  if ( result )
  {
    if ( a2 )
    {
      v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 240))(this);
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
        {
          v7 = *((_DWORD *)this + 27);
          if ( v7 < 0 || v7 >= *((_DWORD *)this + 24) )
          {
            sub_100BEFA0(v5, "vehicle_driver_eyes", (int)&v14, (int)v13);
          }
          else
          {
            v8 = *((_DWORD *)this + 21);
            v9 = 156 * v7;
            v14 = *(int *)(v9 + v8 + 132);
            v15 = *(float *)(v9 + v8 + 136);
            v16 = *(float *)(v9 + v8 + 140);
            v13[0] = *(int *)(v9 + v8 + 144);
            v13[1] = *(int *)(v9 + v8 + 148);
            v13[2] = *(int *)(v8 + v9 + 152);
            sub_10262790((int)v5, (int)&v14, (int)v13);
            v14 = *((int *)this + 28);
            v15 = *((float *)this + 29);
            v16 = *((float *)this + 30);
          }
          if ( *(_DWORD *)(dword_106CEF4C + 48) )
          {
            *(float *)v12 = 2.0;
            *(float *)&v12[1] = 2.0;
            *(float *)&v12[2] = 2.0;
            *(float *)v11 = -2.0;
            *(float *)&v11[1] = -2.0;
            *(float *)&v11[2] = -2.0;
            sub_1011BB20((int)&v14, (int)v11, (int)v12, 255, 0, 0, 64, 10.0);
          }
          (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v6 + 1412))(v6, &v14, v13);
        }
      }
    }
    if ( a3 )
    {
      v10 = sub_100BDCE0((int)v5, 1);
      if ( v10 > -1 )
      {
        sub_10031B50((int)v5, 0.0);
        sub_100BC090(v5 + 31, (float *)(dword_106B31C8 + 12));
        sub_100C3330((int)v5, v10);
        sub_100C1A10((int)v5);
      }
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 12) + 28))(*((_DWORD *)this + 12), 0);
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 12) + 32))(
             *((_DWORD *)this + 12),
             0,
             LODWORD(flt_106F1CA8),
             LODWORD(flt_106F1CAC),
             LODWORD(flt_106F1CB0));
  }
  return result;
}
