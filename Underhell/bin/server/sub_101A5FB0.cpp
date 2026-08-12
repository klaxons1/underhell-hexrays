void __thiscall sub_101A5FB0(int this, _DWORD *a2)
{
  float v3; // [esp+8h] [ebp-4h]

  switch ( *a2 )
  {
    case 0x81:
    case 0x82:
      sub_1032CFB0(this, (int)a2);
      if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 && sub_101A4FF0((float *)this) )
        sub_101A21B0((float *)this);
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        goto LABEL_12;
      if ( sub_101A5E50(this) )
      {
        v3 = (float)*(int *)(this + 220);
        if ( (double)(*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this) * 0.5 < v3 )
          sub_101A5210(this, 0);
        else
          sub_101A5210(this, 1);
      }
      else if ( sub_1007DE30(*(_DWORD **)(this + 2588)) != 11 && !sub_101A4FF0((float *)this) )
      {
LABEL_12:
        sub_1007DD70(11);
      }
      return;
    case 0xFA:
      if ( (*(_BYTE *)(this + 256) & 1) != 0 )
        goto LABEL_14;
      return;
    case 0xFC:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        if ( sub_1001ED60((float *)(this + 3848)) )
        {
          sub_10027CD0((_DWORD *)this, 0);
          sub_10050BA0((float *)(this + 3860), -1.0);
        }
        else
        {
          sub_10043E90((int *)this, dword_106EC798);
        }
      }
      return;
    case 0xFD:
    case 0xFF:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
LABEL_14:
        sub_10027CD0((_DWORD *)this, 0);
      return;
    default:
      sub_1032CFB0(this, (int)a2);
      return;
  }
}
