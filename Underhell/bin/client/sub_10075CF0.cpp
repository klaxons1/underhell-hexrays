void __stdcall sub_10075CF0(int a1)
{
  int v1; // eax

  dword_103DC820 = a1;
  switch ( a1 )
  {
    case 0:
      sub_1008D9B0(1);
      sub_10136C50(1);
      sub_10039FF0();
      break;
    case 1:
      sub_100341C0(0);
      sub_10034100(0);
      flt_10433C54 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 60))(dword_1041315C);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 1);
      break;
    case 3:
      (*(void (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 20))(off_103ED0FC);
      v1 = sub_100B1EE0();
      sub_100B1F20(v1);
      break;
    case 4:
      sub_100743E0();
      sub_100341C0(1);
      sub_10034100(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 0);
      break;
    case 5:
      sub_10075B60();
      break;
    case 6:
      sub_1002B550();
      sub_10075720();
      break;
    default:
      return;
  }
}
