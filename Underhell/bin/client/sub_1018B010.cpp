void __thiscall sub_1018B010(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  v2 = this - 428;
  v3 = this + 12;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this - 428) + 868))(this - 428, this + 12, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 2588) + 772))(*(_DWORD *)(this + 2588), v3);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 2580) + 124))(*(_DWORD *)(this + 2580), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 2576) + 124))(*(_DWORD *)(this + 2576), 0);
  v4 = *(_DWORD *)(this + 2572);
  switch ( v4 )
  {
    case 1:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1044))(v2, this + 267);
      break;
    case 2:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1040))(v2, this + 267);
      break;
    case 3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1032))(v2, this + 267);
      break;
    default:
      if ( v4 )
        DevMsg("CTextWindow::Update: unknown content type %i\n", *(_DWORD *)(this + 2572));
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1036))(v2, this + 267);
      break;
  }
}
