void __thiscall sub_102A1510(int this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  void (__thiscall *v4)(int, _DWORD); // edx
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  switch ( *a2 )
  {
    case 0x186A0:
      sub_10039F40(*(int **)(this + 4), 16);
      v3 = *(_DWORD **)(this + 4);
      *(_DWORD *)(this + 16) = 1;
      sub_100C54B0(v3);
      break;
    case 0x186A1:
      sub_10039F40(*(int **)(this + 4), 16);
      sub_100C54B0(*(_DWORD **)(this + 4));
      break;
    case 0x186A2:
      sub_1029FAF0((void *)this);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    case 0x186A3:
      if ( sub_102A1370(this) )
      {
        sub_1029FA70((int *)this);
        v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12);
        *(_DWORD *)(this + 16) = 3;
        v4(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 308))(this);
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
          *(_DWORD *)(this + 4),
          "Failed to find valid exit point\n");
      }
      break;
    case 0x186A4:
      sub_1029F780((_DWORD *)this, *(_DWORD *)(this + 112), 0, v5);
      *(float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 2604) + 20) = v5[1];
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    default:
      sub_1004B450((_BYTE *)this, (int)a2);
      break;
  }
}
