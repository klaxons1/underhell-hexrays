void __thiscall sub_101A9FB0(int this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+8h] [ebp-50h]
  float v8[12]; // [esp+10h] [ebp-48h] BYREF
  int v9[3]; // [esp+40h] [ebp-18h] BYREF
  int v10[3]; // [esp+4Ch] [ebp-Ch] BYREF

  switch ( *a2 )
  {
    case 0x30:
    case 0x31:
    case 0x3E:
    case 0x42:
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x81:
      if ( sub_1007E000(*(_DWORD **)(this + 2588)) )
      {
        if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)this + 1748))(this);
        }
        else
        {
          v6 = sub_10021B60((_DWORD *)this);
          sub_10039F40((int *)this, v6);
        }
      }
      else
      {
        sub_10027CD0((_DWORD *)this, 0);
        sub_10082A70(*(float **)(this + 2588), 1u);
      }
      break;
    case 0x96:
      if ( sub_10022C70((_DWORD *)this) )
      {
        sub_101A9BF0(this, this);
        if ( (*(_BYTE *)(dword_106B945C + 48) & 1) != 0 )
        {
          *(float *)v10 = 50.0;
          *(float *)&v10[1] = 50.0;
          *(float *)&v10[2] = 50.0;
          *(float *)v9 = -50.0;
          *(float *)&v9[1] = -50.0;
          *(float *)&v9[2] = -50.0;
          v3 = (_DWORD *)sub_10022C70((_DWORD *)this);
          v4 = sub_10019640(v3);
          sub_1011BB20((int)v4, (int)v9, (int)v10, 255, 255, 255, 1, 5.0);
        }
        v7 = dword_10633890;
        v5 = sub_10022C70((_DWORD *)this);
        sub_1001EE90(v8, 3, (float *)(v5 + 716), 6, -1.0, 1, v7);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 2588) + 20))(
               *(_DWORD *)(this + 2588),
               v8,
               0) )
        {
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
        }
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 1);
      }
      break;
    default:
      sub_10046510(this, (int)a2);
      break;
  }
}
