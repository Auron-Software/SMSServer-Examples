import * as React from 'react';
import { Route } from 'react-router';
import Layout from './components/Layout';

import './custom.css'
import ViewMessages from './components/ViewMessages';

export default () => (
    <Layout>
        <Route exact path='/' component={ViewMessages} />
    </Layout>
);
