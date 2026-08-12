_DWORD *__thiscall sub_10001540(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  sub_100B5510(a2);
  sub_1024C5C0(0, "AchievementNotificationPanel");
  *this = &CAchievementNotificationPanel::`vftable';
  this[11] = &CAchievementNotificationPanel::`vftable';
  if ( !byte_10400D40 )
  {
    byte_10400D40 = 1;
    v3 = sub_10242540("CAchievementNotificationPanel");
    *(_DWORD *)(v3 + 28) = sub_10001040;
    *(_DWORD *)(v3 + 24) = sub_10242540("EditablePanel");
  }
  if ( !byte_10400D41 )
  {
    byte_10400D41 = 1;
    v4 = sub_102484C0("CAchievementNotificationPanel");
    *(_DWORD *)(v4 + 24) = sub_10001040;
    *(_DWORD *)(v4 + 20) = sub_102484C0("EditablePanel");
  }
  if ( !byte_10400D42 )
  {
    byte_10400D42 = 1;
    v5 = sub_10242580("CAchievementNotificationPanel");
    *(_DWORD *)(v5 + 68) = sub_10001040;
    *(_DWORD *)(v5 + 24) = sub_10242580("EditablePanel");
  }
  this[80] = 0;
  this[81] = 0;
  this[82] = 0;
  *((_WORD *)this + 170) = -1;
  this[86] = this[80];
  this[83] = -1;
  this[84] = 0xFFFF;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  *((float *)this + 75) = 0.0;
  if ( sub_100DDA40(252) )
    v7 = sub_1024C5C0((int)(this + 11), "Notification_Background");
  else
    v7 = 0;
  this[78] = v7;
  if ( sub_100DDA40(236) )
    v8 = sub_10249210((int)(this + 11), "Notification_Icon");
  else
    v8 = 0;
  this[79] = v8;
  if ( sub_100DDA40(284) )
    v9 = sub_1024B100((int)(this + 11), "HeadingLabel", (int)Locale);
  else
    v9 = 0;
  this[76] = v9;
  if ( sub_100DDA40(284) )
    v10 = sub_1024B100((int)(this + 11), "TitleLabel", (int)Locale);
  else
    v10 = 0;
  this[77] = v10;
  sub_10249190(1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, this[28], 0);
  return this;
}
