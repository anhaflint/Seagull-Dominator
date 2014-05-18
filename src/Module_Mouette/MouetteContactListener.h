#pragma once
#include <b2WorldCallbacks.h>
#include "Mouette.h"

class MouetteContactListener : public b2ContactListener
{
	void BeginContact(b2Contact* contact) {

		//check if fixture A was a Mouette
		void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
		if (bodyUserData)
			static_cast<Mouette*>(bodyUserData)->startContact();

		//check if fixture B was a Mouette
		bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
		if (bodyUserData)
			static_cast<Mouette*>(bodyUserData)->startContact();

	}

	void EndContact(b2Contact* contact) {

		//check if fixture A was a Mouette
		void* bodyUserData = contact->GetFixtureA()->GetBody()->GetUserData();
		if (bodyUserData)
			static_cast<Mouette*>(bodyUserData)->endContact();

		//check if fixture B was a Mouette
		bodyUserData = contact->GetFixtureB()->GetBody()->GetUserData();
		if (bodyUserData)
			static_cast<Mouette*>(bodyUserData)->endContact();

	}
};

