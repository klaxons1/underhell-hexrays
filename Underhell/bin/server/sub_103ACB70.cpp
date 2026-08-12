void __thiscall sub_103ACB70(int this, _DWORD *a2)
{
  int v3; // eax
  bool v4; // al
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // edi
  void (__thiscall *v8)(_BYTE *, _DWORD *); // eax

  switch ( *a2 )
  {
    case 3:
      v3 = sub_10021B90((void *)this);
      if ( !v3 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 876))(v3, this) )
        sub_10027CD0((_DWORD *)this, 0);
      v4 = sub_10022810((float *)this);
      goto LABEL_6;
    case 0x42:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        sub_1001E2F0((_DWORD *)this, (int)a2);
      }
      else
      {
        sub_10078720(*(_DWORD *)(this + 2604), this + 3736, -1.0);
        v4 = sub_10021530((_DWORD *)this);
LABEL_6:
        if ( v4 )
          sub_10027CD0((_DWORD *)this, 0);
      }
      break;
    case 0x4A:
      sub_103AC980(this);
      if ( !sub_10020E90((_DWORD *)this) || sub_10023D10((_DWORD *)this, 35) )
        sub_103AC090(this);
      break;
    case 0x96:
      if ( sub_1007E000(*(_DWORD **)(this + 2588)) )
      {
        if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1748))(this) )
          {
            v6 = sub_1007DE30(*(_DWORD **)(this + 2588));
            sub_10039F40((int *)this, v6);
            sub_103AC700(this);
          }
        }
        else
        {
          v5 = sub_10021B60((_DWORD *)this);
          sub_10039F40((int *)this, v5);
        }
      }
      else
      {
        sub_10027CD0((_DWORD *)this, 0);
        sub_10082A70(*(float **)(this + 2588), 1u);
      }
      break;
    default:
      v7 = *(_BYTE **)(this + 3624);
      if ( !v7 || (v8 = *(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v7 + 112), v7[8] = 1, v8(v7, a2), !v7[8]) )
        sub_100497D0((int *)this, a2);
      break;
  }
}
